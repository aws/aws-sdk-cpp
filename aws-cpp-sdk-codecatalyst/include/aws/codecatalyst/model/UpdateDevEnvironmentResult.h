/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecatalyst/model/InstanceType.h>
#include <aws/codecatalyst/model/IdeConfiguration.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class UpdateDevEnvironmentResult
  {
  public:
    AWS_CODECATALYST_API UpdateDevEnvironmentResult();
    AWS_CODECATALYST_API UpdateDevEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API UpdateDevEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline UpdateDevEnvironmentResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline UpdateDevEnvironmentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID of the Dev Environment. </p>
     */
    inline UpdateDevEnvironmentResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateDevEnvironmentResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateDevEnvironmentResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline UpdateDevEnvironmentResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>The name of the project in the space.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectName = value; }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectName = std::move(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline void SetProjectName(const char* value) { m_projectName.assign(value); }

    /**
     * <p>The name of the project in the space.</p>
     */
    inline UpdateDevEnvironmentResult& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline UpdateDevEnvironmentResult& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project in the space.</p>
     */
    inline UpdateDevEnvironmentResult& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_alias = value; }

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_alias = std::move(value); }

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline void SetAlias(const char* value) { m_alias.assign(value); }

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline UpdateDevEnvironmentResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline UpdateDevEnvironmentResult& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The user-specified alias for the Dev Environment.</p>
     */
    inline UpdateDevEnvironmentResult& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment.</p>
     */
    inline const Aws::Vector<IdeConfiguration>& GetIdes() const{ return m_ides; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment.</p>
     */
    inline void SetIdes(const Aws::Vector<IdeConfiguration>& value) { m_ides = value; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment.</p>
     */
    inline void SetIdes(Aws::Vector<IdeConfiguration>&& value) { m_ides = std::move(value); }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment.</p>
     */
    inline UpdateDevEnvironmentResult& WithIdes(const Aws::Vector<IdeConfiguration>& value) { SetIdes(value); return *this;}

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment.</p>
     */
    inline UpdateDevEnvironmentResult& WithIdes(Aws::Vector<IdeConfiguration>&& value) { SetIdes(std::move(value)); return *this;}

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment.</p>
     */
    inline UpdateDevEnvironmentResult& AddIdes(const IdeConfiguration& value) { m_ides.push_back(value); return *this; }

    /**
     * <p>Information about the integrated development environment (IDE) configured for
     * the Dev Environment.</p>
     */
    inline UpdateDevEnvironmentResult& AddIdes(IdeConfiguration&& value) { m_ides.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline void SetInstanceType(const InstanceType& value) { m_instanceType = value; }

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline void SetInstanceType(InstanceType&& value) { m_instanceType = std::move(value); }

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline UpdateDevEnvironmentResult& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The Amazon EC2 instace type to use for the Dev Environment. </p>
     */
    inline UpdateDevEnvironmentResult& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. </p>
     */
    inline int GetInactivityTimeoutMinutes() const{ return m_inactivityTimeoutMinutes; }

    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. </p>
     */
    inline void SetInactivityTimeoutMinutes(int value) { m_inactivityTimeoutMinutes = value; }

    /**
     * <p>The amount of time the Dev Environment will run without any activity detected
     * before stopping, in minutes. </p>
     */
    inline UpdateDevEnvironmentResult& WithInactivityTimeoutMinutes(int value) { SetInactivityTimeoutMinutes(value); return *this;}


    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline UpdateDevEnvironmentResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline UpdateDevEnvironmentResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A user-specified idempotency token. Idempotency ensures that an API request
     * completes only once. With an idempotent request, if the original request
     * completes successfully, the subsequent retries return the result from the
     * original successful request and have no additional effect.</p>
     */
    inline UpdateDevEnvironmentResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_spaceName;

    Aws::String m_projectName;

    Aws::String m_alias;

    Aws::Vector<IdeConfiguration> m_ides;

    InstanceType m_instanceType;

    int m_inactivityTimeoutMinutes;

    Aws::String m_clientToken;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
