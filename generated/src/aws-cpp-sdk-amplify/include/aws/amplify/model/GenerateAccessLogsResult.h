/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p> The result structure for the generate access logs request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GenerateAccessLogsResult">AWS
   * API Reference</a></p>
   */
  class GenerateAccessLogsResult
  {
  public:
    AWS_AMPLIFY_API GenerateAccessLogsResult();
    AWS_AMPLIFY_API GenerateAccessLogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API GenerateAccessLogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The pre-signed URL for the requested access logs. </p>
     */
    inline const Aws::String& GetLogUrl() const{ return m_logUrl; }

    /**
     * <p> The pre-signed URL for the requested access logs. </p>
     */
    inline void SetLogUrl(const Aws::String& value) { m_logUrl = value; }

    /**
     * <p> The pre-signed URL for the requested access logs. </p>
     */
    inline void SetLogUrl(Aws::String&& value) { m_logUrl = std::move(value); }

    /**
     * <p> The pre-signed URL for the requested access logs. </p>
     */
    inline void SetLogUrl(const char* value) { m_logUrl.assign(value); }

    /**
     * <p> The pre-signed URL for the requested access logs. </p>
     */
    inline GenerateAccessLogsResult& WithLogUrl(const Aws::String& value) { SetLogUrl(value); return *this;}

    /**
     * <p> The pre-signed URL for the requested access logs. </p>
     */
    inline GenerateAccessLogsResult& WithLogUrl(Aws::String&& value) { SetLogUrl(std::move(value)); return *this;}

    /**
     * <p> The pre-signed URL for the requested access logs. </p>
     */
    inline GenerateAccessLogsResult& WithLogUrl(const char* value) { SetLogUrl(value); return *this;}

  private:

    Aws::String m_logUrl;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
