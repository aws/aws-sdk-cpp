/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Nielsen Naes Ii Nw<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/NielsenNaesIiNw">AWS
   * API Reference</a></p>
   */
  class NielsenNaesIiNw
  {
  public:
    AWS_MEDIALIVE_API NielsenNaesIiNw();
    AWS_MEDIALIVE_API NielsenNaesIiNw(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NielsenNaesIiNw& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Enter the check digit string for the watermark
     */
    inline const Aws::String& GetCheckDigitString() const{ return m_checkDigitString; }

    /**
     * Enter the check digit string for the watermark
     */
    inline bool CheckDigitStringHasBeenSet() const { return m_checkDigitStringHasBeenSet; }

    /**
     * Enter the check digit string for the watermark
     */
    inline void SetCheckDigitString(const Aws::String& value) { m_checkDigitStringHasBeenSet = true; m_checkDigitString = value; }

    /**
     * Enter the check digit string for the watermark
     */
    inline void SetCheckDigitString(Aws::String&& value) { m_checkDigitStringHasBeenSet = true; m_checkDigitString = std::move(value); }

    /**
     * Enter the check digit string for the watermark
     */
    inline void SetCheckDigitString(const char* value) { m_checkDigitStringHasBeenSet = true; m_checkDigitString.assign(value); }

    /**
     * Enter the check digit string for the watermark
     */
    inline NielsenNaesIiNw& WithCheckDigitString(const Aws::String& value) { SetCheckDigitString(value); return *this;}

    /**
     * Enter the check digit string for the watermark
     */
    inline NielsenNaesIiNw& WithCheckDigitString(Aws::String&& value) { SetCheckDigitString(std::move(value)); return *this;}

    /**
     * Enter the check digit string for the watermark
     */
    inline NielsenNaesIiNw& WithCheckDigitString(const char* value) { SetCheckDigitString(value); return *this;}


    /**
     * Enter the Nielsen Source ID (SID) to include in the watermark
     */
    inline double GetSid() const{ return m_sid; }

    /**
     * Enter the Nielsen Source ID (SID) to include in the watermark
     */
    inline bool SidHasBeenSet() const { return m_sidHasBeenSet; }

    /**
     * Enter the Nielsen Source ID (SID) to include in the watermark
     */
    inline void SetSid(double value) { m_sidHasBeenSet = true; m_sid = value; }

    /**
     * Enter the Nielsen Source ID (SID) to include in the watermark
     */
    inline NielsenNaesIiNw& WithSid(double value) { SetSid(value); return *this;}

  private:

    Aws::String m_checkDigitString;
    bool m_checkDigitStringHasBeenSet = false;

    double m_sid;
    bool m_sidHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
