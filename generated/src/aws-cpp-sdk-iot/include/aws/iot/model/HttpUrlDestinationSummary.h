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
   * <p>Information about an HTTP URL destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/HttpUrlDestinationSummary">AWS
   * API Reference</a></p>
   */
  class HttpUrlDestinationSummary
  {
  public:
    AWS_IOT_API HttpUrlDestinationSummary() = default;
    AWS_IOT_API HttpUrlDestinationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API HttpUrlDestinationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL used to confirm ownership of or access to the HTTP topic rule
     * destination URL.</p>
     */
    inline const Aws::String& GetConfirmationUrl() const { return m_confirmationUrl; }
    inline bool ConfirmationUrlHasBeenSet() const { return m_confirmationUrlHasBeenSet; }
    template<typename ConfirmationUrlT = Aws::String>
    void SetConfirmationUrl(ConfirmationUrlT&& value) { m_confirmationUrlHasBeenSet = true; m_confirmationUrl = std::forward<ConfirmationUrlT>(value); }
    template<typename ConfirmationUrlT = Aws::String>
    HttpUrlDestinationSummary& WithConfirmationUrl(ConfirmationUrlT&& value) { SetConfirmationUrl(std::forward<ConfirmationUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_confirmationUrl;
    bool m_confirmationUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
