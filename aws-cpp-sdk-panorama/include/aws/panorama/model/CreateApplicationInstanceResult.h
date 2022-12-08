/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
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
namespace Panorama
{
namespace Model
{
  class CreateApplicationInstanceResult
  {
  public:
    AWS_PANORAMA_API CreateApplicationInstanceResult();
    AWS_PANORAMA_API CreateApplicationInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API CreateApplicationInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application instance's ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const{ return m_applicationInstanceId; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(const Aws::String& value) { m_applicationInstanceId = value; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(Aws::String&& value) { m_applicationInstanceId = std::move(value); }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(const char* value) { m_applicationInstanceId.assign(value); }

    /**
     * <p>The application instance's ID.</p>
     */
    inline CreateApplicationInstanceResult& WithApplicationInstanceId(const Aws::String& value) { SetApplicationInstanceId(value); return *this;}

    /**
     * <p>The application instance's ID.</p>
     */
    inline CreateApplicationInstanceResult& WithApplicationInstanceId(Aws::String&& value) { SetApplicationInstanceId(std::move(value)); return *this;}

    /**
     * <p>The application instance's ID.</p>
     */
    inline CreateApplicationInstanceResult& WithApplicationInstanceId(const char* value) { SetApplicationInstanceId(value); return *this;}

  private:

    Aws::String m_applicationInstanceId;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
