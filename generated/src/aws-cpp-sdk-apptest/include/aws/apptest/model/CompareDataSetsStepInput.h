/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apptest/model/DataSet.h>
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
   * <p>Specifies the compare data sets step input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CompareDataSetsStepInput">AWS
   * API Reference</a></p>
   */
  class CompareDataSetsStepInput
  {
  public:
    AWS_APPTEST_API CompareDataSetsStepInput() = default;
    AWS_APPTEST_API CompareDataSetsStepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareDataSetsStepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source location of the compare data sets step input location.</p>
     */
    inline const Aws::String& GetSourceLocation() const { return m_sourceLocation; }
    inline bool SourceLocationHasBeenSet() const { return m_sourceLocationHasBeenSet; }
    template<typename SourceLocationT = Aws::String>
    void SetSourceLocation(SourceLocationT&& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = std::forward<SourceLocationT>(value); }
    template<typename SourceLocationT = Aws::String>
    CompareDataSetsStepInput& WithSourceLocation(SourceLocationT&& value) { SetSourceLocation(std::forward<SourceLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target location of the compare data sets step input location.</p>
     */
    inline const Aws::String& GetTargetLocation() const { return m_targetLocation; }
    inline bool TargetLocationHasBeenSet() const { return m_targetLocationHasBeenSet; }
    template<typename TargetLocationT = Aws::String>
    void SetTargetLocation(TargetLocationT&& value) { m_targetLocationHasBeenSet = true; m_targetLocation = std::forward<TargetLocationT>(value); }
    template<typename TargetLocationT = Aws::String>
    CompareDataSetsStepInput& WithTargetLocation(TargetLocationT&& value) { SetTargetLocation(std::forward<TargetLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source data sets of the compare data sets step input location.</p>
     */
    inline const Aws::Vector<DataSet>& GetSourceDataSets() const { return m_sourceDataSets; }
    inline bool SourceDataSetsHasBeenSet() const { return m_sourceDataSetsHasBeenSet; }
    template<typename SourceDataSetsT = Aws::Vector<DataSet>>
    void SetSourceDataSets(SourceDataSetsT&& value) { m_sourceDataSetsHasBeenSet = true; m_sourceDataSets = std::forward<SourceDataSetsT>(value); }
    template<typename SourceDataSetsT = Aws::Vector<DataSet>>
    CompareDataSetsStepInput& WithSourceDataSets(SourceDataSetsT&& value) { SetSourceDataSets(std::forward<SourceDataSetsT>(value)); return *this;}
    template<typename SourceDataSetsT = DataSet>
    CompareDataSetsStepInput& AddSourceDataSets(SourceDataSetsT&& value) { m_sourceDataSetsHasBeenSet = true; m_sourceDataSets.emplace_back(std::forward<SourceDataSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target data sets of the compare data sets step input location.</p>
     */
    inline const Aws::Vector<DataSet>& GetTargetDataSets() const { return m_targetDataSets; }
    inline bool TargetDataSetsHasBeenSet() const { return m_targetDataSetsHasBeenSet; }
    template<typename TargetDataSetsT = Aws::Vector<DataSet>>
    void SetTargetDataSets(TargetDataSetsT&& value) { m_targetDataSetsHasBeenSet = true; m_targetDataSets = std::forward<TargetDataSetsT>(value); }
    template<typename TargetDataSetsT = Aws::Vector<DataSet>>
    CompareDataSetsStepInput& WithTargetDataSets(TargetDataSetsT&& value) { SetTargetDataSets(std::forward<TargetDataSetsT>(value)); return *this;}
    template<typename TargetDataSetsT = DataSet>
    CompareDataSetsStepInput& AddTargetDataSets(TargetDataSetsT&& value) { m_targetDataSetsHasBeenSet = true; m_targetDataSets.emplace_back(std::forward<TargetDataSetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceLocation;
    bool m_sourceLocationHasBeenSet = false;

    Aws::String m_targetLocation;
    bool m_targetLocationHasBeenSet = false;

    Aws::Vector<DataSet> m_sourceDataSets;
    bool m_sourceDataSetsHasBeenSet = false;

    Aws::Vector<DataSet> m_targetDataSets;
    bool m_targetDataSetsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
