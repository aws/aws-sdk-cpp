/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/CreateCloudFormationSummary.h>
#include <aws/apptest/model/DeleteCloudFormationSummary.h>
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
   * <p>Specifies the CloudFormation step summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CloudFormationStepSummary">AWS
   * API Reference</a></p>
   */
  class CloudFormationStepSummary
  {
  public:
    AWS_APPTEST_API CloudFormationStepSummary();
    AWS_APPTEST_API CloudFormationStepSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CloudFormationStepSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Creates the CloudFormation summary of the step.</p>
     */
    inline const CreateCloudFormationSummary& GetCreateCloudformation() const{ return m_createCloudformation; }
    inline bool CreateCloudformationHasBeenSet() const { return m_createCloudformationHasBeenSet; }
    inline void SetCreateCloudformation(const CreateCloudFormationSummary& value) { m_createCloudformationHasBeenSet = true; m_createCloudformation = value; }
    inline void SetCreateCloudformation(CreateCloudFormationSummary&& value) { m_createCloudformationHasBeenSet = true; m_createCloudformation = std::move(value); }
    inline CloudFormationStepSummary& WithCreateCloudformation(const CreateCloudFormationSummary& value) { SetCreateCloudformation(value); return *this;}
    inline CloudFormationStepSummary& WithCreateCloudformation(CreateCloudFormationSummary&& value) { SetCreateCloudformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deletes the CloudFormation summary of the CloudFormation step summary.</p>
     */
    inline const DeleteCloudFormationSummary& GetDeleteCloudformation() const{ return m_deleteCloudformation; }
    inline bool DeleteCloudformationHasBeenSet() const { return m_deleteCloudformationHasBeenSet; }
    inline void SetDeleteCloudformation(const DeleteCloudFormationSummary& value) { m_deleteCloudformationHasBeenSet = true; m_deleteCloudformation = value; }
    inline void SetDeleteCloudformation(DeleteCloudFormationSummary&& value) { m_deleteCloudformationHasBeenSet = true; m_deleteCloudformation = std::move(value); }
    inline CloudFormationStepSummary& WithDeleteCloudformation(const DeleteCloudFormationSummary& value) { SetDeleteCloudformation(value); return *this;}
    inline CloudFormationStepSummary& WithDeleteCloudformation(DeleteCloudFormationSummary&& value) { SetDeleteCloudformation(std::move(value)); return *this;}
    ///@}
  private:

    CreateCloudFormationSummary m_createCloudformation;
    bool m_createCloudformationHasBeenSet = false;

    DeleteCloudFormationSummary m_deleteCloudformation;
    bool m_deleteCloudformationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
