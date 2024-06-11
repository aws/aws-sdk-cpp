/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{
  class CreateResourceDefinitionResult
  {
  public:
    AWS_GREENGRASS_API CreateResourceDefinitionResult();
    AWS_GREENGRASS_API CreateResourceDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API CreateResourceDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the definition.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateResourceDefinitionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateResourceDefinitionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateResourceDefinitionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The time, in milliseconds since the epoch, when the definition was created.
     */
    inline const Aws::String& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline void SetCreationTimestamp(const Aws::String& value) { m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::String&& value) { m_creationTimestamp = std::move(value); }
    inline void SetCreationTimestamp(const char* value) { m_creationTimestamp.assign(value); }
    inline CreateResourceDefinitionResult& WithCreationTimestamp(const Aws::String& value) { SetCreationTimestamp(value); return *this;}
    inline CreateResourceDefinitionResult& WithCreationTimestamp(Aws::String&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    inline CreateResourceDefinitionResult& WithCreationTimestamp(const char* value) { SetCreationTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the definition.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateResourceDefinitionResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateResourceDefinitionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateResourceDefinitionResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The time, in milliseconds since the epoch, when the definition was last updated.
     */
    inline const Aws::String& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline void SetLastUpdatedTimestamp(const Aws::String& value) { m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::String&& value) { m_lastUpdatedTimestamp = std::move(value); }
    inline void SetLastUpdatedTimestamp(const char* value) { m_lastUpdatedTimestamp.assign(value); }
    inline CreateResourceDefinitionResult& WithLastUpdatedTimestamp(const Aws::String& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline CreateResourceDefinitionResult& WithLastUpdatedTimestamp(Aws::String&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    inline CreateResourceDefinitionResult& WithLastUpdatedTimestamp(const char* value) { SetLastUpdatedTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the latest version associated with the definition.
     */
    inline const Aws::String& GetLatestVersion() const{ return m_latestVersion; }
    inline void SetLatestVersion(const Aws::String& value) { m_latestVersion = value; }
    inline void SetLatestVersion(Aws::String&& value) { m_latestVersion = std::move(value); }
    inline void SetLatestVersion(const char* value) { m_latestVersion.assign(value); }
    inline CreateResourceDefinitionResult& WithLatestVersion(const Aws::String& value) { SetLatestVersion(value); return *this;}
    inline CreateResourceDefinitionResult& WithLatestVersion(Aws::String&& value) { SetLatestVersion(std::move(value)); return *this;}
    inline CreateResourceDefinitionResult& WithLatestVersion(const char* value) { SetLatestVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the latest version associated with the definition.
     */
    inline const Aws::String& GetLatestVersionArn() const{ return m_latestVersionArn; }
    inline void SetLatestVersionArn(const Aws::String& value) { m_latestVersionArn = value; }
    inline void SetLatestVersionArn(Aws::String&& value) { m_latestVersionArn = std::move(value); }
    inline void SetLatestVersionArn(const char* value) { m_latestVersionArn.assign(value); }
    inline CreateResourceDefinitionResult& WithLatestVersionArn(const Aws::String& value) { SetLatestVersionArn(value); return *this;}
    inline CreateResourceDefinitionResult& WithLatestVersionArn(Aws::String&& value) { SetLatestVersionArn(std::move(value)); return *this;}
    inline CreateResourceDefinitionResult& WithLatestVersionArn(const char* value) { SetLatestVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the definition.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateResourceDefinitionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateResourceDefinitionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateResourceDefinitionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateResourceDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateResourceDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateResourceDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_creationTimestamp;

    Aws::String m_id;

    Aws::String m_lastUpdatedTimestamp;

    Aws::String m_latestVersion;

    Aws::String m_latestVersionArn;

    Aws::String m_name;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
