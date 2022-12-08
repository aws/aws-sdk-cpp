/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Comprehend
{
namespace Model
{
  class CreateDocumentClassifierResult
  {
  public:
    AWS_COMPREHEND_API CreateDocumentClassifierResult();
    AWS_COMPREHEND_API CreateDocumentClassifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API CreateDocumentClassifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline const Aws::String& GetDocumentClassifierArn() const{ return m_documentClassifierArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline void SetDocumentClassifierArn(const Aws::String& value) { m_documentClassifierArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline void SetDocumentClassifierArn(Aws::String&& value) { m_documentClassifierArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline void SetDocumentClassifierArn(const char* value) { m_documentClassifierArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline CreateDocumentClassifierResult& WithDocumentClassifierArn(const Aws::String& value) { SetDocumentClassifierArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline CreateDocumentClassifierResult& WithDocumentClassifierArn(Aws::String&& value) { SetDocumentClassifierArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the document classifier.</p>
     */
    inline CreateDocumentClassifierResult& WithDocumentClassifierArn(const char* value) { SetDocumentClassifierArn(value); return *this;}

  private:

    Aws::String m_documentClassifierArn;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
