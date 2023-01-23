/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class UpdateRegistryResult
  {
  public:
    AWS_GLUE_API UpdateRegistryResult();
    AWS_GLUE_API UpdateRegistryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API UpdateRegistryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the updated registry.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p>The name of the updated registry.</p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryName = value; }

    /**
     * <p>The name of the updated registry.</p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryName = std::move(value); }

    /**
     * <p>The name of the updated registry.</p>
     */
    inline void SetRegistryName(const char* value) { m_registryName.assign(value); }

    /**
     * <p>The name of the updated registry.</p>
     */
    inline UpdateRegistryResult& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>The name of the updated registry.</p>
     */
    inline UpdateRegistryResult& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>The name of the updated registry.</p>
     */
    inline UpdateRegistryResult& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    /**
     * <p>The Amazon Resource name (ARN) of the updated registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p>The Amazon Resource name (ARN) of the updated registry.</p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArn = value; }

    /**
     * <p>The Amazon Resource name (ARN) of the updated registry.</p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArn = std::move(value); }

    /**
     * <p>The Amazon Resource name (ARN) of the updated registry.</p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArn.assign(value); }

    /**
     * <p>The Amazon Resource name (ARN) of the updated registry.</p>
     */
    inline UpdateRegistryResult& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p>The Amazon Resource name (ARN) of the updated registry.</p>
     */
    inline UpdateRegistryResult& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource name (ARN) of the updated registry.</p>
     */
    inline UpdateRegistryResult& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}

  private:

    Aws::String m_registryName;

    Aws::String m_registryArn;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
