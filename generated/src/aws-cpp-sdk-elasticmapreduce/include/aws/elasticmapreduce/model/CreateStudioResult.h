/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{
  class CreateStudioResult
  {
  public:
    AWS_EMR_API CreateStudioResult();
    AWS_EMR_API CreateStudioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API CreateStudioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioId = value; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioId = std::move(value); }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(const char* value) { m_studioId.assign(value); }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline CreateStudioResult& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline CreateStudioResult& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline CreateStudioResult& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>The unique Studio access URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The unique Studio access URL.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * <p>The unique Studio access URL.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * <p>The unique Studio access URL.</p>
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * <p>The unique Studio access URL.</p>
     */
    inline CreateStudioResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The unique Studio access URL.</p>
     */
    inline CreateStudioResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The unique Studio access URL.</p>
     */
    inline CreateStudioResult& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_studioId;

    Aws::String m_url;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
