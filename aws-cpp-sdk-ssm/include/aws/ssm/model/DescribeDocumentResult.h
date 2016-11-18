﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/DocumentDescription.h>

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
  class AWS_SSM_API DescribeDocumentResult
  {
  public:
    DescribeDocumentResult();
    DescribeDocumentResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDocumentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the SSM document.</p>
     */
    inline const DocumentDescription& GetDocument() const{ return m_document; }

    /**
     * <p>Information about the SSM document.</p>
     */
    inline void SetDocument(const DocumentDescription& value) { m_document = value; }

    /**
     * <p>Information about the SSM document.</p>
     */
    inline void SetDocument(DocumentDescription&& value) { m_document = value; }

    /**
     * <p>Information about the SSM document.</p>
     */
    inline DescribeDocumentResult& WithDocument(const DocumentDescription& value) { SetDocument(value); return *this;}

    /**
     * <p>Information about the SSM document.</p>
     */
    inline DescribeDocumentResult& WithDocument(DocumentDescription&& value) { SetDocument(value); return *this;}

  private:
    DocumentDescription m_document;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
