/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ProfileConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
namespace Glue
{
namespace Model
{
  class GetUsageProfileResult
  {
  public:
    AWS_GLUE_API GetUsageProfileResult();
    AWS_GLUE_API GetUsageProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetUsageProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the usage profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetUsageProfileResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetUsageProfileResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetUsageProfileResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the usage profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetUsageProfileResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetUsageProfileResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetUsageProfileResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ProfileConfiguration</code> object specifying the job and session
     * values for the profile.</p>
     */
    inline const ProfileConfiguration& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const ProfileConfiguration& value) { m_configuration = value; }
    inline void SetConfiguration(ProfileConfiguration&& value) { m_configuration = std::move(value); }
    inline GetUsageProfileResult& WithConfiguration(const ProfileConfiguration& value) { SetConfiguration(value); return *this;}
    inline GetUsageProfileResult& WithConfiguration(ProfileConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the usage profile was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedOn() const{ return m_createdOn; }
    inline void SetCreatedOn(const Aws::Utils::DateTime& value) { m_createdOn = value; }
    inline void SetCreatedOn(Aws::Utils::DateTime&& value) { m_createdOn = std::move(value); }
    inline GetUsageProfileResult& WithCreatedOn(const Aws::Utils::DateTime& value) { SetCreatedOn(value); return *this;}
    inline GetUsageProfileResult& WithCreatedOn(Aws::Utils::DateTime&& value) { SetCreatedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the usage profile was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedOn() const{ return m_lastModifiedOn; }
    inline void SetLastModifiedOn(const Aws::Utils::DateTime& value) { m_lastModifiedOn = value; }
    inline void SetLastModifiedOn(Aws::Utils::DateTime&& value) { m_lastModifiedOn = std::move(value); }
    inline GetUsageProfileResult& WithLastModifiedOn(const Aws::Utils::DateTime& value) { SetLastModifiedOn(value); return *this;}
    inline GetUsageProfileResult& WithLastModifiedOn(Aws::Utils::DateTime&& value) { SetLastModifiedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetUsageProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetUsageProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetUsageProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_description;

    ProfileConfiguration m_configuration;

    Aws::Utils::DateTime m_createdOn;

    Aws::Utils::DateTime m_lastModifiedOn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
