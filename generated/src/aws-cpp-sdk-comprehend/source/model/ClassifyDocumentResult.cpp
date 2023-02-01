/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ClassifyDocumentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ClassifyDocumentResult::ClassifyDocumentResult()
{
}

ClassifyDocumentResult::ClassifyDocumentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ClassifyDocumentResult& ClassifyDocumentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Classes"))
  {
    Aws::Utils::Array<JsonView> classesJsonList = jsonValue.GetArray("Classes");
    for(unsigned classesIndex = 0; classesIndex < classesJsonList.GetLength(); ++classesIndex)
    {
      m_classes.push_back(classesJsonList[classesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DocumentMetadata"))
  {
    m_documentMetadata = jsonValue.GetObject("DocumentMetadata");

  }

  if(jsonValue.ValueExists("DocumentType"))
  {
    Aws::Utils::Array<JsonView> documentTypeJsonList = jsonValue.GetArray("DocumentType");
    for(unsigned documentTypeIndex = 0; documentTypeIndex < documentTypeJsonList.GetLength(); ++documentTypeIndex)
    {
      m_documentType.push_back(documentTypeJsonList[documentTypeIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }



  return *this;
}
