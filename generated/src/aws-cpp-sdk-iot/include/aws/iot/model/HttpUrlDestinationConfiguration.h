/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>HTTP URL destination configuration used by the topic rule's HTTP
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/HttpUrlDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class HttpUrlDestinationConfiguration
  {
  public:
    AWS_IOT_API HttpUrlDestinationConfiguration();
    AWS_IOT_API HttpUrlDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API HttpUrlDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL IoT uses to confirm ownership of or access to the topic rule
     * destination URL.</p>
     */
    inline const Aws::String& GetConfirmationUrl() const{ return m_confirmationUrl; }

    /**
     * <p>The URL IoT uses to confirm ownership of or access to the topic rule
     * destination URL.</p>
     */
    inline bool ConfirmationUrlHasBeenSet() const { return m_confirmationUrlHasBeenSet; }

    /**
     * <p>The URL IoT uses to confirm ownership of or access to the topic rule
     * destination URL.</p>
     */
    inline void SetConfirmationUrl(const Aws::String& value) { m_confirmationUrlHasBeenSet = true; m_confirmationUrl = value; }

    /**
     * <p>The URL IoT uses to confirm ownership of or access to the topic rule
     * destination URL.</p>
     */
    inline void SetConfirmationUrl(Aws::String&& value) { m_confirmationUrlHasBeenSet = true; m_confirmationUrl = std::move(value); }

    /**
     * <p>The URL IoT uses to confirm ownership of or access to the topic rule
     * destination URL.</p>
     */
    inline void SetConfirmationUrl(const char* value) { m_confirmationUrlHasBeenSet = true; m_confirmationUrl.assign(value); }

    /**
     * <p>The URL IoT uses to confirm ownership of or access to the topic rule
     * destination URL.</p>
     */
    inline HttpUrlDestinationConfiguration& WithConfirmationUrl(const Aws::String& value) { SetConfirmationUrl(value); return *this;}

    /**
     * <p>The URL IoT uses to confirm ownership of or access to the topic rule
     * destination URL.</p>
     */
    inline HttpUrlDestinationConfiguration& WithConfirmationUrl(Aws::String&& value) { SetConfirmationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL IoT uses to confirm ownership of or access to the topic rule
     * destination URL.</p>
     */
    inline HttpUrlDestinationConfiguration& WithConfirmationUrl(const char* value) { SetConfirmationUrl(value); return *this;}

  private:

    Aws::String m_confirmationUrl;
    bool m_confirmationUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
