﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{
  class AWS_QUICKSIGHT_API GenerateEmbedUrlForAnonymousUserResult
  {
  public:
    GenerateEmbedUrlForAnonymousUserResult();
    GenerateEmbedUrlForAnonymousUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GenerateEmbedUrlForAnonymousUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The embed URL for the dashboard.</p>
     */
    inline const Aws::String& GetEmbedUrl() const{ return m_embedUrl; }

    /**
     * <p>The embed URL for the dashboard.</p>
     */
    inline void SetEmbedUrl(const Aws::String& value) { m_embedUrl = value; }

    /**
     * <p>The embed URL for the dashboard.</p>
     */
    inline void SetEmbedUrl(Aws::String&& value) { m_embedUrl = std::move(value); }

    /**
     * <p>The embed URL for the dashboard.</p>
     */
    inline void SetEmbedUrl(const char* value) { m_embedUrl.assign(value); }

    /**
     * <p>The embed URL for the dashboard.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserResult& WithEmbedUrl(const Aws::String& value) { SetEmbedUrl(value); return *this;}

    /**
     * <p>The embed URL for the dashboard.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserResult& WithEmbedUrl(Aws::String&& value) { SetEmbedUrl(std::move(value)); return *this;}

    /**
     * <p>The embed URL for the dashboard.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserResult& WithEmbedUrl(const char* value) { SetEmbedUrl(value); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline GenerateEmbedUrlForAnonymousUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_embedUrl;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
