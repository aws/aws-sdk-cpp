/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/GroupVersion.h>
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
namespace Greengrass
{
namespace Model
{
  class GetGroupVersionResult
  {
  public:
    AWS_GREENGRASS_API GetGroupVersionResult();
    AWS_GREENGRASS_API GetGroupVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetGroupVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the group version.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the group version.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The ARN of the group version.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The ARN of the group version.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The ARN of the group version.
     */
    inline GetGroupVersionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the group version.
     */
    inline GetGroupVersionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the group version.
     */
    inline GetGroupVersionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The time, in milliseconds since the epoch, when the group version was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * The time, in milliseconds since the epoch, when the group version was created.
     */
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestamp = value; }

    /**
     * The time, in milliseconds since the epoch, when the group version was created.
     */
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestamp = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the group version was created.
     */
    inline void SetCreationTimestamp(const char* value) { m_creationTimestamp.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the group version was created.
     */
    inline GetGroupVersionResult& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the group version was created.
     */
    inline GetGroupVersionResult& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the group version was created.
     */
    inline GetGroupVersionResult& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}


    /**
     * Information about the group version definition.
     */
    inline const GroupVersion& GetDefinition() const{ return m_definition; }

    /**
     * Information about the group version definition.
     */
    inline void SetDefinition(const GroupVersion& value) { m_definition = value; }

    /**
     * Information about the group version definition.
     */
    inline void SetDefinition(GroupVersion&& value) { m_definition = std::move(value); }

    /**
     * Information about the group version definition.
     */
    inline GetGroupVersionResult& WithDefinition(const GroupVersion& value) { SetDefinition(value); return *this;}

    /**
     * Information about the group version definition.
     */
    inline GetGroupVersionResult& WithDefinition(GroupVersion&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * The ID of the group that the version is associated with.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the group that the version is associated with.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The ID of the group that the version is associated with.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The ID of the group that the version is associated with.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The ID of the group that the version is associated with.
     */
    inline GetGroupVersionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the group that the version is associated with.
     */
    inline GetGroupVersionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the group that the version is associated with.
     */
    inline GetGroupVersionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The ID of the group version.
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * The ID of the group version.
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * The ID of the group version.
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * The ID of the group version.
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * The ID of the group version.
     */
    inline GetGroupVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * The ID of the group version.
     */
    inline GetGroupVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * The ID of the group version.
     */
    inline GetGroupVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_creationTimestamp;

    GroupVersion m_definition;

    Aws::String m_id;

    Aws::String m_version;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
