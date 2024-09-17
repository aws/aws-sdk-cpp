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
    AWS_APPTEST_API CompareDataSetsStepInput();
    AWS_APPTEST_API CompareDataSetsStepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CompareDataSetsStepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source location of the compare data sets step input location.</p>
     */
    inline const Aws::String& GetSourceLocation() const{ return m_sourceLocation; }
    inline bool SourceLocationHasBeenSet() const { return m_sourceLocationHasBeenSet; }
    inline void SetSourceLocation(const Aws::String& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = value; }
    inline void SetSourceLocation(Aws::String&& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = std::move(value); }
    inline void SetSourceLocation(const char* value) { m_sourceLocationHasBeenSet = true; m_sourceLocation.assign(value); }
    inline CompareDataSetsStepInput& WithSourceLocation(const Aws::String& value) { SetSourceLocation(value); return *this;}
    inline CompareDataSetsStepInput& WithSourceLocation(Aws::String&& value) { SetSourceLocation(std::move(value)); return *this;}
    inline CompareDataSetsStepInput& WithSourceLocation(const char* value) { SetSourceLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target location of the compare data sets step input location.</p>
     */
    inline const Aws::String& GetTargetLocation() const{ return m_targetLocation; }
    inline bool TargetLocationHasBeenSet() const { return m_targetLocationHasBeenSet; }
    inline void SetTargetLocation(const Aws::String& value) { m_targetLocationHasBeenSet = true; m_targetLocation = value; }
    inline void SetTargetLocation(Aws::String&& value) { m_targetLocationHasBeenSet = true; m_targetLocation = std::move(value); }
    inline void SetTargetLocation(const char* value) { m_targetLocationHasBeenSet = true; m_targetLocation.assign(value); }
    inline CompareDataSetsStepInput& WithTargetLocation(const Aws::String& value) { SetTargetLocation(value); return *this;}
    inline CompareDataSetsStepInput& WithTargetLocation(Aws::String&& value) { SetTargetLocation(std::move(value)); return *this;}
    inline CompareDataSetsStepInput& WithTargetLocation(const char* value) { SetTargetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source data sets of the compare data sets step input location.</p>
     */
    inline const Aws::Vector<DataSet>& GetSourceDataSets() const{ return m_sourceDataSets; }
    inline bool SourceDataSetsHasBeenSet() const { return m_sourceDataSetsHasBeenSet; }
    inline void SetSourceDataSets(const Aws::Vector<DataSet>& value) { m_sourceDataSetsHasBeenSet = true; m_sourceDataSets = value; }
    inline void SetSourceDataSets(Aws::Vector<DataSet>&& value) { m_sourceDataSetsHasBeenSet = true; m_sourceDataSets = std::move(value); }
    inline CompareDataSetsStepInput& WithSourceDataSets(const Aws::Vector<DataSet>& value) { SetSourceDataSets(value); return *this;}
    inline CompareDataSetsStepInput& WithSourceDataSets(Aws::Vector<DataSet>&& value) { SetSourceDataSets(std::move(value)); return *this;}
    inline CompareDataSetsStepInput& AddSourceDataSets(const DataSet& value) { m_sourceDataSetsHasBeenSet = true; m_sourceDataSets.push_back(value); return *this; }
    inline CompareDataSetsStepInput& AddSourceDataSets(DataSet&& value) { m_sourceDataSetsHasBeenSet = true; m_sourceDataSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target data sets of the compare data sets step input location.</p>
     */
    inline const Aws::Vector<DataSet>& GetTargetDataSets() const{ return m_targetDataSets; }
    inline bool TargetDataSetsHasBeenSet() const { return m_targetDataSetsHasBeenSet; }
    inline void SetTargetDataSets(const Aws::Vector<DataSet>& value) { m_targetDataSetsHasBeenSet = true; m_targetDataSets = value; }
    inline void SetTargetDataSets(Aws::Vector<DataSet>&& value) { m_targetDataSetsHasBeenSet = true; m_targetDataSets = std::move(value); }
    inline CompareDataSetsStepInput& WithTargetDataSets(const Aws::Vector<DataSet>& value) { SetTargetDataSets(value); return *this;}
    inline CompareDataSetsStepInput& WithTargetDataSets(Aws::Vector<DataSet>&& value) { SetTargetDataSets(std::move(value)); return *this;}
    inline CompareDataSetsStepInput& AddTargetDataSets(const DataSet& value) { m_targetDataSetsHasBeenSet = true; m_targetDataSets.push_back(value); return *this; }
    inline CompareDataSetsStepInput& AddTargetDataSets(DataSet&& value) { m_targetDataSetsHasBeenSet = true; m_targetDataSets.push_back(std::move(value)); return *this; }
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
