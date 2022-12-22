/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/resource-explorer-2/model/IndexState.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class DeleteIndexResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API DeleteIndexResult();
    AWS_RESOURCEEXPLORER2_API DeleteIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API DeleteIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you successfully started the deletion
     * process.</p>  <p>This operation is asynchronous. To check its status, call
     * the <a>GetIndex</a> operation.</p> 
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you successfully started the deletion
     * process.</p>  <p>This operation is asynchronous. To check its status, call
     * the <a>GetIndex</a> operation.</p> 
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you successfully started the deletion
     * process.</p>  <p>This operation is asynchronous. To check its status, call
     * the <a>GetIndex</a> operation.</p> 
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you successfully started the deletion
     * process.</p>  <p>This operation is asynchronous. To check its status, call
     * the <a>GetIndex</a> operation.</p> 
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you successfully started the deletion
     * process.</p>  <p>This operation is asynchronous. To check its status, call
     * the <a>GetIndex</a> operation.</p> 
     */
    inline DeleteIndexResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you successfully started the deletion
     * process.</p>  <p>This operation is asynchronous. To check its status, call
     * the <a>GetIndex</a> operation.</p> 
     */
    inline DeleteIndexResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the index that you successfully started the deletion
     * process.</p>  <p>This operation is asynchronous. To check its status, call
     * the <a>GetIndex</a> operation.</p> 
     */
    inline DeleteIndexResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time when you last updated this index.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date and time when you last updated this index.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The date and time when you last updated this index.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date and time when you last updated this index.</p>
     */
    inline DeleteIndexResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date and time when you last updated this index.</p>
     */
    inline DeleteIndexResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Indicates the current state of the index. </p>
     */
    inline const IndexState& GetState() const{ return m_state; }

    /**
     * <p>Indicates the current state of the index. </p>
     */
    inline void SetState(const IndexState& value) { m_state = value; }

    /**
     * <p>Indicates the current state of the index. </p>
     */
    inline void SetState(IndexState&& value) { m_state = std::move(value); }

    /**
     * <p>Indicates the current state of the index. </p>
     */
    inline DeleteIndexResult& WithState(const IndexState& value) { SetState(value); return *this;}

    /**
     * <p>Indicates the current state of the index. </p>
     */
    inline DeleteIndexResult& WithState(IndexState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_lastUpdatedAt;

    IndexState m_state;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
