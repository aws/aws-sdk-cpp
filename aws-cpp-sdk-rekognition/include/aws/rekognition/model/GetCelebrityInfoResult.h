/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API GetCelebrityInfoResult
  {
  public:
    GetCelebrityInfoResult();
    GetCelebrityInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCelebrityInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline const Aws::Vector<Aws::String>& GetUrls() const{ return m_urls; }

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline void SetUrls(const Aws::Vector<Aws::String>& value) { m_urls = value; }

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline void SetUrls(Aws::Vector<Aws::String>&& value) { m_urls = std::move(value); }

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline GetCelebrityInfoResult& WithUrls(const Aws::Vector<Aws::String>& value) { SetUrls(value); return *this;}

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline GetCelebrityInfoResult& WithUrls(Aws::Vector<Aws::String>&& value) { SetUrls(std::move(value)); return *this;}

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline GetCelebrityInfoResult& AddUrls(const Aws::String& value) { m_urls.push_back(value); return *this; }

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline GetCelebrityInfoResult& AddUrls(Aws::String&& value) { m_urls.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of URLs pointing to additional celebrity information. </p>
     */
    inline GetCelebrityInfoResult& AddUrls(const char* value) { m_urls.push_back(value); return *this; }


    /**
     * <p>The name of the celebrity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the celebrity.</p>
     */
    inline GetCelebrityInfoResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the celebrity.</p>
     */
    inline GetCelebrityInfoResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the celebrity.</p>
     */
    inline GetCelebrityInfoResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_urls;

    Aws::String m_name;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
