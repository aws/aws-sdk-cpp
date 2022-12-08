/**
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
    AWS_APPSTREAM_API StreamingExperienceSettings();
    AWS_APPSTREAM_API StreamingExperienceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API StreamingExperienceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The preferred protocol that you want to use while streaming your
     * application.</p>
     */
    inline const PreferredProtocol& GetPreferredProtocol() const{ return m_preferredProtocol; }

    /**
     * <p>The preferred protocol that you want to use while streaming your
     * application.</p>
     */
    inline bool PreferredProtocolHasBeenSet() const { return m_preferredProtocolHasBeenSet; }

    /**
     * <p>The preferred protocol that you want to use while streaming your
     * application.</p>
     */
    inline void SetPreferredProtocol(const PreferredProtocol& value) { m_preferredProtocolHasBeenSet = true; m_preferredProtocol = value; }

    /**
     * <p>The preferred protocol that you want to use while streaming your
     * application.</p>
     */
    inline void SetPreferredProtocol(PreferredProtocol&& value) { m_preferredProtocolHasBeenSet = true; m_preferredProtocol = std::move(value); }

    /**
     * <p>The preferred protocol that you want to use while streaming your
     * application.</p>
     */
    inline StreamingExperienceSettings& WithPreferredProtocol(const PreferredProtocol& value) { SetPreferredProtocol(value); return *this;}

    /**
     * <p>The preferred protocol that you want to use while streaming your
     * application.</p>
     */
    inline StreamingExperienceSettings& WithPreferredProtocol(PreferredProtocol&& value) { SetPreferredProtocol(std::move(value)); return *this;}

  private:

    PreferredProtocol m_preferredProtocol;
    bool m_preferredProtocolHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
