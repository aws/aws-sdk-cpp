/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/RegistryStatus.h>
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
  class GetRegistryResult
  {
  public:
    AWS_GLUE_API GetRegistryResult();
    AWS_GLUE_API GetRegistryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetRegistryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryName = value; }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryName = std::move(value); }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(const char* value) { m_registryName.assign(value); }

    /**
     * <p>The name of the registry.</p>
     */
    inline GetRegistryResult& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline GetRegistryResult& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline GetRegistryResult& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline GetRegistryResult& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline GetRegistryResult& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline GetRegistryResult& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}


    /**
     * <p>A description of the registry.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the registry.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the registry.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the registry.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the registry.</p>
     */
    inline GetRegistryResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the registry.</p>
     */
    inline GetRegistryResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the registry.</p>
     */
    inline GetRegistryResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the registry.</p>
     */
    inline const RegistryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the registry.</p>
     */
    inline void SetStatus(const RegistryStatus& value) { m_status = value; }

    /**
     * <p>The status of the registry.</p>
     */
    inline void SetStatus(RegistryStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the registry.</p>
     */
    inline GetRegistryResult& WithStatus(const RegistryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the registry.</p>
     */
    inline GetRegistryResult& WithStatus(RegistryStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the registry was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time the registry was created.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTime = value; }

    /**
     * <p>The date and time the registry was created.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The date and time the registry was created.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTime.assign(value); }

    /**
     * <p>The date and time the registry was created.</p>
     */
    inline GetRegistryResult& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time the registry was created.</p>
     */
    inline GetRegistryResult& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the registry was created.</p>
     */
    inline GetRegistryResult& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


    /**
     * <p>The date and time the registry was updated.</p>
     */
    inline const Aws::String& GetUpdatedTime() const{ return m_updatedTime; }

    /**
     * <p>The date and time the registry was updated.</p>
     */
    inline void SetUpdatedTime(const Aws::String& value) { m_updatedTime = value; }

    /**
     * <p>The date and time the registry was updated.</p>
     */
    inline void SetUpdatedTime(Aws::String&& value) { m_updatedTime = std::move(value); }

    /**
     * <p>The date and time the registry was updated.</p>
     */
    inline void SetUpdatedTime(const char* value) { m_updatedTime.assign(value); }

    /**
     * <p>The date and time the registry was updated.</p>
     */
    inline GetRegistryResult& WithUpdatedTime(const Aws::String& value) { SetUpdatedTime(value); return *this;}

    /**
     * <p>The date and time the registry was updated.</p>
     */
    inline GetRegistryResult& WithUpdatedTime(Aws::String&& value) { SetUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the registry was updated.</p>
     */
    inline GetRegistryResult& WithUpdatedTime(const char* value) { SetUpdatedTime(value); return *this;}

  private:

    Aws::String m_registryName;

    Aws::String m_registryArn;

    Aws::String m_description;

    RegistryStatus m_status;

    Aws::String m_createdTime;

    Aws::String m_updatedTime;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
