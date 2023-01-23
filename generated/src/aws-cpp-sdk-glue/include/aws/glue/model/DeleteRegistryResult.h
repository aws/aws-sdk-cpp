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
  class DeleteRegistryResult
  {
  public:
    AWS_GLUE_API DeleteRegistryResult();
    AWS_GLUE_API DeleteRegistryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DeleteRegistryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the registry being deleted.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p>The name of the registry being deleted.</p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryName = value; }

    /**
     * <p>The name of the registry being deleted.</p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryName = std::move(value); }

    /**
     * <p>The name of the registry being deleted.</p>
     */
    inline void SetRegistryName(const char* value) { m_registryName.assign(value); }

    /**
     * <p>The name of the registry being deleted.</p>
     */
    inline DeleteRegistryResult& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>The name of the registry being deleted.</p>
     */
    inline DeleteRegistryResult& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>The name of the registry being deleted.</p>
     */
    inline DeleteRegistryResult& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the registry being deleted.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry being deleted.</p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry being deleted.</p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry being deleted.</p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry being deleted.</p>
     */
    inline DeleteRegistryResult& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the registry being deleted.</p>
     */
    inline DeleteRegistryResult& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the registry being deleted.</p>
     */
    inline DeleteRegistryResult& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}


    /**
     * <p>The status of the registry. A successful operation will return the
     * <code>Deleting</code> status.</p>
     */
    inline const RegistryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the registry. A successful operation will return the
     * <code>Deleting</code> status.</p>
     */
    inline void SetStatus(const RegistryStatus& value) { m_status = value; }

    /**
     * <p>The status of the registry. A successful operation will return the
     * <code>Deleting</code> status.</p>
     */
    inline void SetStatus(RegistryStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the registry. A successful operation will return the
     * <code>Deleting</code> status.</p>
     */
    inline DeleteRegistryResult& WithStatus(const RegistryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the registry. A successful operation will return the
     * <code>Deleting</code> status.</p>
     */
    inline DeleteRegistryResult& WithStatus(RegistryStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_registryName;

    Aws::String m_registryArn;

    RegistryStatus m_status;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
