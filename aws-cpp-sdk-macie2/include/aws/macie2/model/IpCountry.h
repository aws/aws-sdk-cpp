/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the country that an IP address originated
   * from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/IpCountry">AWS
   * API Reference</a></p>
   */
  class IpCountry
  {
  public:
    AWS_MACIE2_API IpCountry();
    AWS_MACIE2_API IpCountry(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API IpCountry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country that
     * the IP address originated from. For example, US for the United States.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country that
     * the IP address originated from. For example, US for the United States.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country that
     * the IP address originated from. For example, US for the United States.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country that
     * the IP address originated from. For example, US for the United States.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country that
     * the IP address originated from. For example, US for the United States.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country that
     * the IP address originated from. For example, US for the United States.</p>
     */
    inline IpCountry& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country that
     * the IP address originated from. For example, US for the United States.</p>
     */
    inline IpCountry& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country that
     * the IP address originated from. For example, US for the United States.</p>
     */
    inline IpCountry& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The name of the country that the IP address originated from.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the country that the IP address originated from.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the country that the IP address originated from.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the country that the IP address originated from.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the country that the IP address originated from.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the country that the IP address originated from.</p>
     */
    inline IpCountry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the country that the IP address originated from.</p>
     */
    inline IpCountry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the country that the IP address originated from.</p>
     */
    inline IpCountry& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
