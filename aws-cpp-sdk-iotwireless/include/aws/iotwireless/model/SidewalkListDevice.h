/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Sidewalk object used by list functions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkListDevice">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API SidewalkListDevice
  {
  public:
    SidewalkListDevice();
    SidewalkListDevice(Aws::Utils::Json::JsonView jsonValue);
    SidewalkListDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline const Aws::String& GetAmazonId() const{ return m_amazonId; }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline bool AmazonIdHasBeenSet() const { return m_amazonIdHasBeenSet; }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline void SetAmazonId(const Aws::String& value) { m_amazonIdHasBeenSet = true; m_amazonId = value; }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline void SetAmazonId(Aws::String&& value) { m_amazonIdHasBeenSet = true; m_amazonId = std::move(value); }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline void SetAmazonId(const char* value) { m_amazonIdHasBeenSet = true; m_amazonId.assign(value); }

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline SidewalkListDevice& WithAmazonId(const Aws::String& value) { SetAmazonId(value); return *this;}

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline SidewalkListDevice& WithAmazonId(Aws::String&& value) { SetAmazonId(std::move(value)); return *this;}

    /**
     * <p>The Sidewalk Amazon ID.</p>
     */
    inline SidewalkListDevice& WithAmazonId(const char* value) { SetAmazonId(value); return *this;}

  private:

    Aws::String m_amazonId;
    bool m_amazonIdHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
