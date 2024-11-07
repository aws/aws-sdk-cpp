/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Provides the information necessary for a user to access the
   * logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/LogsConfigurationPolicy">AWS
   * API Reference</a></p>
   */
  class LogsConfigurationPolicy
  {
  public:
    AWS_CLEANROOMSML_API LogsConfigurationPolicy();
    AWS_CLEANROOMSML_API LogsConfigurationPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API LogsConfigurationPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of account IDs that are allowed to access the logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedAccountIds() const{ return m_allowedAccountIds; }
    inline bool AllowedAccountIdsHasBeenSet() const { return m_allowedAccountIdsHasBeenSet; }
    inline void SetAllowedAccountIds(const Aws::Vector<Aws::String>& value) { m_allowedAccountIdsHasBeenSet = true; m_allowedAccountIds = value; }
    inline void SetAllowedAccountIds(Aws::Vector<Aws::String>&& value) { m_allowedAccountIdsHasBeenSet = true; m_allowedAccountIds = std::move(value); }
    inline LogsConfigurationPolicy& WithAllowedAccountIds(const Aws::Vector<Aws::String>& value) { SetAllowedAccountIds(value); return *this;}
    inline LogsConfigurationPolicy& WithAllowedAccountIds(Aws::Vector<Aws::String>&& value) { SetAllowedAccountIds(std::move(value)); return *this;}
    inline LogsConfigurationPolicy& AddAllowedAccountIds(const Aws::String& value) { m_allowedAccountIdsHasBeenSet = true; m_allowedAccountIds.push_back(value); return *this; }
    inline LogsConfigurationPolicy& AddAllowedAccountIds(Aws::String&& value) { m_allowedAccountIdsHasBeenSet = true; m_allowedAccountIds.push_back(std::move(value)); return *this; }
    inline LogsConfigurationPolicy& AddAllowedAccountIds(const char* value) { m_allowedAccountIdsHasBeenSet = true; m_allowedAccountIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A regular expression pattern that is used to parse the logs and return
     * information that matches the pattern.</p>
     */
    inline const Aws::String& GetFilterPattern() const{ return m_filterPattern; }
    inline bool FilterPatternHasBeenSet() const { return m_filterPatternHasBeenSet; }
    inline void SetFilterPattern(const Aws::String& value) { m_filterPatternHasBeenSet = true; m_filterPattern = value; }
    inline void SetFilterPattern(Aws::String&& value) { m_filterPatternHasBeenSet = true; m_filterPattern = std::move(value); }
    inline void SetFilterPattern(const char* value) { m_filterPatternHasBeenSet = true; m_filterPattern.assign(value); }
    inline LogsConfigurationPolicy& WithFilterPattern(const Aws::String& value) { SetFilterPattern(value); return *this;}
    inline LogsConfigurationPolicy& WithFilterPattern(Aws::String&& value) { SetFilterPattern(std::move(value)); return *this;}
    inline LogsConfigurationPolicy& WithFilterPattern(const char* value) { SetFilterPattern(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowedAccountIds;
    bool m_allowedAccountIdsHasBeenSet = false;

    Aws::String m_filterPattern;
    bool m_filterPatternHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
