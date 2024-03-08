/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Configuration information specific to Grid layout, for server-side
   * composition. See "Layouts" in <a
   * href="https://docs.aws.amazon.com/ivs/latest/RealTimeUserGuide/server-side-composition.html">Server-Side
   * Composition</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/GridConfiguration">AWS
   * API Reference</a></p>
   */
  class GridConfiguration
  {
  public:
    AWS_IVSREALTIME_API GridConfiguration();
    AWS_IVSREALTIME_API GridConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API GridConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline const Aws::String& GetFeaturedParticipantAttribute() const{ return m_featuredParticipantAttribute; }

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline bool FeaturedParticipantAttributeHasBeenSet() const { return m_featuredParticipantAttributeHasBeenSet; }

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline void SetFeaturedParticipantAttribute(const Aws::String& value) { m_featuredParticipantAttributeHasBeenSet = true; m_featuredParticipantAttribute = value; }

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline void SetFeaturedParticipantAttribute(Aws::String&& value) { m_featuredParticipantAttributeHasBeenSet = true; m_featuredParticipantAttribute = std::move(value); }

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline void SetFeaturedParticipantAttribute(const char* value) { m_featuredParticipantAttributeHasBeenSet = true; m_featuredParticipantAttribute.assign(value); }

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline GridConfiguration& WithFeaturedParticipantAttribute(const Aws::String& value) { SetFeaturedParticipantAttribute(value); return *this;}

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline GridConfiguration& WithFeaturedParticipantAttribute(Aws::String&& value) { SetFeaturedParticipantAttribute(std::move(value)); return *this;}

    /**
     * <p>This attribute name identifies the featured slot. A participant with this
     * attribute set to <code>"true"</code> (as a string value) in
     * <a>ParticipantTokenConfiguration</a> is placed in the featured slot.</p>
     */
    inline GridConfiguration& WithFeaturedParticipantAttribute(const char* value) { SetFeaturedParticipantAttribute(value); return *this;}

  private:

    Aws::String m_featuredParticipantAttribute;
    bool m_featuredParticipantAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
