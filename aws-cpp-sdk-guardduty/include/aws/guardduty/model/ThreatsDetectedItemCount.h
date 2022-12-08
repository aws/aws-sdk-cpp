/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains total number of infected files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ThreatsDetectedItemCount">AWS
   * API Reference</a></p>
   */
  class ThreatsDetectedItemCount
  {
  public:
    AWS_GUARDDUTY_API ThreatsDetectedItemCount();
    AWS_GUARDDUTY_API ThreatsDetectedItemCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ThreatsDetectedItemCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Total number of infected files.</p>
     */
    inline int GetFiles() const{ return m_files; }

    /**
     * <p>Total number of infected files.</p>
     */
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }

    /**
     * <p>Total number of infected files.</p>
     */
    inline void SetFiles(int value) { m_filesHasBeenSet = true; m_files = value; }

    /**
     * <p>Total number of infected files.</p>
     */
    inline ThreatsDetectedItemCount& WithFiles(int value) { SetFiles(value); return *this;}

  private:

    int m_files;
    bool m_filesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
