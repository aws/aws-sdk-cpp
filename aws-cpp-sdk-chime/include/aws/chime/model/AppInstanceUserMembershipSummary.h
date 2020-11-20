/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ChannelMembershipType.h>
#include <aws/core/utils/DateTime.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>Lists the channels to which app instance users belong.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AppInstanceUserMembershipSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API AppInstanceUserMembershipSummary
  {
  public:
    AppInstanceUserMembershipSummary();
    AppInstanceUserMembershipSummary(Aws::Utils::Json::JsonView jsonValue);
    AppInstanceUserMembershipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of channel summary, </p>
     */
    inline const ChannelMembershipType& GetType() const{ return m_type; }

    /**
     * <p>The type of channel summary, </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of channel summary, </p>
     */
    inline void SetType(const ChannelMembershipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of channel summary, </p>
     */
    inline void SetType(ChannelMembershipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of channel summary, </p>
     */
    inline AppInstanceUserMembershipSummary& WithType(const ChannelMembershipType& value) { SetType(value); return *this;}

    /**
     * <p>The type of channel summary, </p>
     */
    inline AppInstanceUserMembershipSummary& WithType(ChannelMembershipType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The time at which a summary was last read.</p>
     */
    inline const Aws::Utils::DateTime& GetReadMarkerTimestamp() const{ return m_readMarkerTimestamp; }

    /**
     * <p>The time at which a summary was last read.</p>
     */
    inline bool ReadMarkerTimestampHasBeenSet() const { return m_readMarkerTimestampHasBeenSet; }

    /**
     * <p>The time at which a summary was last read.</p>
     */
    inline void SetReadMarkerTimestamp(const Aws::Utils::DateTime& value) { m_readMarkerTimestampHasBeenSet = true; m_readMarkerTimestamp = value; }

    /**
     * <p>The time at which a summary was last read.</p>
     */
    inline void SetReadMarkerTimestamp(Aws::Utils::DateTime&& value) { m_readMarkerTimestampHasBeenSet = true; m_readMarkerTimestamp = std::move(value); }

    /**
     * <p>The time at which a summary was last read.</p>
     */
    inline AppInstanceUserMembershipSummary& WithReadMarkerTimestamp(const Aws::Utils::DateTime& value) { SetReadMarkerTimestamp(value); return *this;}

    /**
     * <p>The time at which a summary was last read.</p>
     */
    inline AppInstanceUserMembershipSummary& WithReadMarkerTimestamp(Aws::Utils::DateTime&& value) { SetReadMarkerTimestamp(std::move(value)); return *this;}

  private:

    ChannelMembershipType m_type;
    bool m_typeHasBeenSet;

    Aws::Utils::DateTime m_readMarkerTimestamp;
    bool m_readMarkerTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
