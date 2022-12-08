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
    AWS_CLOUDDIRECTORY_API PublishSchemaResult();
    AWS_CLOUDDIRECTORY_API PublishSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API PublishSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN that is associated with the published schema. For more information,
     * see <a>arns</a>.</p>
     */
    inline const Aws::String& GetPublishedSchemaArn() const{ return m_publishedSchemaArn; }

    /**
     * <p>The ARN that is associated with the published schema. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetPublishedSchemaArn(const Aws::String& value) { m_publishedSchemaArn = value; }

    /**
     * <p>The ARN that is associated with the published schema. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetPublishedSchemaArn(Aws::String&& value) { m_publishedSchemaArn = std::move(value); }

    /**
     * <p>The ARN that is associated with the published schema. For more information,
     * see <a>arns</a>.</p>
     */
    inline void SetPublishedSchemaArn(const char* value) { m_publishedSchemaArn.assign(value); }

    /**
     * <p>The ARN that is associated with the published schema. For more information,
     * see <a>arns</a>.</p>
     */
    inline PublishSchemaResult& WithPublishedSchemaArn(const Aws::String& value) { SetPublishedSchemaArn(value); return *this;}

    /**
     * <p>The ARN that is associated with the published schema. For more information,
     * see <a>arns</a>.</p>
     */
    inline PublishSchemaResult& WithPublishedSchemaArn(Aws::String&& value) { SetPublishedSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that is associated with the published schema. For more information,
     * see <a>arns</a>.</p>
     */
    inline PublishSchemaResult& WithPublishedSchemaArn(const char* value) { SetPublishedSchemaArn(value); return *this;}

  private:

    Aws::String m_publishedSchemaArn;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
