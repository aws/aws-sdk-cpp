/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/PrefixType.h>
#include <aws/appflow/model/PrefixFormat.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Determines the prefix that Amazon AppFlow applies to the destination folder
   * name. You can name your destination folders according to the flow frequency and
   * date. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/PrefixConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API PrefixConfig
  {
  public:
    PrefixConfig();
    PrefixConfig(Aws::Utils::Json::JsonView jsonValue);
    PrefixConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Determines the format of the prefix, and whether it applies to the file
     * name, file path, or both. </p>
     */
    inline const PrefixType& GetPrefixType() const{ return m_prefixType; }

    /**
     * <p> Determines the format of the prefix, and whether it applies to the file
     * name, file path, or both. </p>
     */
    inline bool PrefixTypeHasBeenSet() const { return m_prefixTypeHasBeenSet; }

    /**
     * <p> Determines the format of the prefix, and whether it applies to the file
     * name, file path, or both. </p>
     */
    inline void SetPrefixType(const PrefixType& value) { m_prefixTypeHasBeenSet = true; m_prefixType = value; }

    /**
     * <p> Determines the format of the prefix, and whether it applies to the file
     * name, file path, or both. </p>
     */
    inline void SetPrefixType(PrefixType&& value) { m_prefixTypeHasBeenSet = true; m_prefixType = std::move(value); }

    /**
     * <p> Determines the format of the prefix, and whether it applies to the file
     * name, file path, or both. </p>
     */
    inline PrefixConfig& WithPrefixType(const PrefixType& value) { SetPrefixType(value); return *this;}

    /**
     * <p> Determines the format of the prefix, and whether it applies to the file
     * name, file path, or both. </p>
     */
    inline PrefixConfig& WithPrefixType(PrefixType&& value) { SetPrefixType(std::move(value)); return *this;}


    /**
     * <p> Determines the level of granularity that's included in the prefix. </p>
     */
    inline const PrefixFormat& GetPrefixFormat() const{ return m_prefixFormat; }

    /**
     * <p> Determines the level of granularity that's included in the prefix. </p>
     */
    inline bool PrefixFormatHasBeenSet() const { return m_prefixFormatHasBeenSet; }

    /**
     * <p> Determines the level of granularity that's included in the prefix. </p>
     */
    inline void SetPrefixFormat(const PrefixFormat& value) { m_prefixFormatHasBeenSet = true; m_prefixFormat = value; }

    /**
     * <p> Determines the level of granularity that's included in the prefix. </p>
     */
    inline void SetPrefixFormat(PrefixFormat&& value) { m_prefixFormatHasBeenSet = true; m_prefixFormat = std::move(value); }

    /**
     * <p> Determines the level of granularity that's included in the prefix. </p>
     */
    inline PrefixConfig& WithPrefixFormat(const PrefixFormat& value) { SetPrefixFormat(value); return *this;}

    /**
     * <p> Determines the level of granularity that's included in the prefix. </p>
     */
    inline PrefixConfig& WithPrefixFormat(PrefixFormat&& value) { SetPrefixFormat(std::move(value)); return *this;}

  private:

    PrefixType m_prefixType;
    bool m_prefixTypeHasBeenSet;

    PrefixFormat m_prefixFormat;
    bool m_prefixFormatHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
