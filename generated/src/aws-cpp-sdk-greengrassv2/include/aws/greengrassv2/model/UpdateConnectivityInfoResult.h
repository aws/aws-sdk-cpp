/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
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
namespace GreengrassV2
{
namespace Model
{
  class UpdateConnectivityInfoResult
  {
  public:
    AWS_GREENGRASSV2_API UpdateConnectivityInfoResult();
    AWS_GREENGRASSV2_API UpdateConnectivityInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API UpdateConnectivityInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The new version of the connectivity information for the core device.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The new version of the connectivity information for the core device.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The new version of the connectivity information for the core device.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The new version of the connectivity information for the core device.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The new version of the connectivity information for the core device.</p>
     */
    inline UpdateConnectivityInfoResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The new version of the connectivity information for the core device.</p>
     */
    inline UpdateConnectivityInfoResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The new version of the connectivity information for the core device.</p>
     */
    inline UpdateConnectivityInfoResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>A message about the connectivity information update request.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the connectivity information update request.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>A message about the connectivity information update request.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>A message about the connectivity information update request.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>A message about the connectivity information update request.</p>
     */
    inline UpdateConnectivityInfoResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the connectivity information update request.</p>
     */
    inline UpdateConnectivityInfoResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the connectivity information update request.</p>
     */
    inline UpdateConnectivityInfoResult& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_version;

    Aws::String m_message;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
