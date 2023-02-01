/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateRegistryResult
  {
  public:
    AWS_GLUE_API CreateRegistryResult();
    AWS_GLUE_API CreateRegistryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateRegistryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the newly created registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created registry.</p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created registry.</p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created registry.</p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created registry.</p>
     */
    inline CreateRegistryResult& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created registry.</p>
     */
    inline CreateRegistryResult& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the newly created registry.</p>
     */
    inline CreateRegistryResult& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}


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
    inline CreateRegistryResult& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline CreateRegistryResult& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline CreateRegistryResult& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


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
    inline CreateRegistryResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the registry.</p>
     */
    inline CreateRegistryResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the registry.</p>
     */
    inline CreateRegistryResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The tags for the registry.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the registry.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags for the registry.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags for the registry.</p>
     */
    inline CreateRegistryResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the registry.</p>
     */
    inline CreateRegistryResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the registry.</p>
     */
    inline CreateRegistryResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags for the registry.</p>
     */
    inline CreateRegistryResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the registry.</p>
     */
    inline CreateRegistryResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the registry.</p>
     */
    inline CreateRegistryResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags for the registry.</p>
     */
    inline CreateRegistryResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags for the registry.</p>
     */
    inline CreateRegistryResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags for the registry.</p>
     */
    inline CreateRegistryResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_registryArn;

    Aws::String m_registryName;

    Aws::String m_description;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
