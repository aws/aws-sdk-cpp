/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the AWS Mainframe Modernization managed action
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/M2ManagedActionProperties">AWS
   * API Reference</a></p>
   */
  class M2ManagedActionProperties
  {
  public:
    AWS_APPTEST_API M2ManagedActionProperties() = default;
    AWS_APPTEST_API M2ManagedActionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API M2ManagedActionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Force stops the AWS Mainframe Modernization managed action properties.</p>
     */
    inline bool GetForceStop() const { return m_forceStop; }
    inline bool ForceStopHasBeenSet() const { return m_forceStopHasBeenSet; }
    inline void SetForceStop(bool value) { m_forceStopHasBeenSet = true; m_forceStop = value; }
    inline M2ManagedActionProperties& WithForceStop(bool value) { SetForceStop(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import data set location of the AWS Mainframe Modernization managed
     * action properties.</p>
     */
    inline const Aws::String& GetImportDataSetLocation() const { return m_importDataSetLocation; }
    inline bool ImportDataSetLocationHasBeenSet() const { return m_importDataSetLocationHasBeenSet; }
    template<typename ImportDataSetLocationT = Aws::String>
    void SetImportDataSetLocation(ImportDataSetLocationT&& value) { m_importDataSetLocationHasBeenSet = true; m_importDataSetLocation = std::forward<ImportDataSetLocationT>(value); }
    template<typename ImportDataSetLocationT = Aws::String>
    M2ManagedActionProperties& WithImportDataSetLocation(ImportDataSetLocationT&& value) { SetImportDataSetLocation(std::forward<ImportDataSetLocationT>(value)); return *this;}
    ///@}
  private:

    bool m_forceStop{false};
    bool m_forceStopHasBeenSet = false;

    Aws::String m_importDataSetLocation;
    bool m_importDataSetLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
