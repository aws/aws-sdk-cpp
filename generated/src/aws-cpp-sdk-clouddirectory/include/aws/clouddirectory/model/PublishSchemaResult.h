/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{
  class PublishSchemaResult
  {
  public:
    AWS_CLOUDDIRECTORY_API PublishSchemaResult() = default;
    AWS_CLOUDDIRECTORY_API PublishSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API PublishSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN that is associated with the published schema. For more information,
     * see <a>arns</a>.</p>
     */
    inline const Aws::String& GetPublishedSchemaArn() const { return m_publishedSchemaArn; }
    template<typename PublishedSchemaArnT = Aws::String>
    void SetPublishedSchemaArn(PublishedSchemaArnT&& value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn = std::forward<PublishedSchemaArnT>(value); }
    template<typename PublishedSchemaArnT = Aws::String>
    PublishSchemaResult& WithPublishedSchemaArn(PublishedSchemaArnT&& value) { SetPublishedSchemaArn(std::forward<PublishedSchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PublishSchemaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_publishedSchemaArn;
    bool m_publishedSchemaArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
