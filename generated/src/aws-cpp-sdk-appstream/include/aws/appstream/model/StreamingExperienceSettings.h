﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/PreferredProtocol.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>The streaming protocol you want your stack to prefer. This can be UDP or TCP.
   * Currently, UDP is only supported in the Windows native client.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/StreamingExperienceSettings">AWS
   * API Reference</a></p>
   */
  class StreamingExperienceSettings
  {
  public:
    AWS_APPSTREAM_API StreamingExperienceSettings() = default;
    AWS_APPSTREAM_API StreamingExperienceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API StreamingExperienceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The preferred protocol that you want to use while streaming your
     * application.</p>
     */
    inline PreferredProtocol GetPreferredProtocol() const { return m_preferredProtocol; }
    inline bool PreferredProtocolHasBeenSet() const { return m_preferredProtocolHasBeenSet; }
    inline void SetPreferredProtocol(PreferredProtocol value) { m_preferredProtocolHasBeenSet = true; m_preferredProtocol = value; }
    inline StreamingExperienceSettings& WithPreferredProtocol(PreferredProtocol value) { SetPreferredProtocol(value); return *this;}
    ///@}
  private:

    PreferredProtocol m_preferredProtocol{PreferredProtocol::NOT_SET};
    bool m_preferredProtocolHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
