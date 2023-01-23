/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Lightsail
{
namespace Model
{
  class GetContainerAPIMetadataResult
  {
  public:
    AWS_LIGHTSAIL_API GetContainerAPIMetadataResult();
    AWS_LIGHTSAIL_API GetContainerAPIMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContainerAPIMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata about Lightsail containers, such as the current version of the
     * Lightsail Control (lightsailctl) plugin.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Metadata about Lightsail containers, such as the current version of the
     * Lightsail Control (lightsailctl) plugin.</p>
     */
    inline void SetMetadata(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { m_metadata = value; }

    /**
     * <p>Metadata about Lightsail containers, such as the current version of the
     * Lightsail Control (lightsailctl) plugin.</p>
     */
    inline void SetMetadata(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { m_metadata = std::move(value); }

    /**
     * <p>Metadata about Lightsail containers, such as the current version of the
     * Lightsail Control (lightsailctl) plugin.</p>
     */
    inline GetContainerAPIMetadataResult& WithMetadata(const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& value) { SetMetadata(value); return *this;}

    /**
     * <p>Metadata about Lightsail containers, such as the current version of the
     * Lightsail Control (lightsailctl) plugin.</p>
     */
    inline GetContainerAPIMetadataResult& WithMetadata(Aws::Vector<Aws::Map<Aws::String, Aws::String>>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Metadata about Lightsail containers, such as the current version of the
     * Lightsail Control (lightsailctl) plugin.</p>
     */
    inline GetContainerAPIMetadataResult& AddMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadata.push_back(value); return *this; }

    /**
     * <p>Metadata about Lightsail containers, such as the current version of the
     * Lightsail Control (lightsailctl) plugin.</p>
     */
    inline GetContainerAPIMetadataResult& AddMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadata.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_metadata;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
