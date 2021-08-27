/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DocumentDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class AWS_SSM_API CreateDocumentResult
  {
  public:
    CreateDocumentResult();
    CreateDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Systems Manager document.</p>
     */
    inline const DocumentDescription& GetDocumentDescription() const{ return m_documentDescription; }

    /**
     * <p>Information about the Systems Manager document.</p>
     */
    inline void SetDocumentDescription(const DocumentDescription& value) { m_documentDescription = value; }

    /**
     * <p>Information about the Systems Manager document.</p>
     */
    inline void SetDocumentDescription(DocumentDescription&& value) { m_documentDescription = std::move(value); }

    /**
     * <p>Information about the Systems Manager document.</p>
     */
    inline CreateDocumentResult& WithDocumentDescription(const DocumentDescription& value) { SetDocumentDescription(value); return *this;}

    /**
     * <p>Information about the Systems Manager document.</p>
     */
    inline CreateDocumentResult& WithDocumentDescription(DocumentDescription&& value) { SetDocumentDescription(std::move(value)); return *this;}

  private:

    DocumentDescription m_documentDescription;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
