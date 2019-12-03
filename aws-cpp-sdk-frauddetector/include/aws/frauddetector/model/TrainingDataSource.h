/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The training data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/TrainingDataSource">AWS
   * API Reference</a></p>
   */
  class AWS_FRAUDDETECTOR_API TrainingDataSource
  {
  public:
    TrainingDataSource();
    TrainingDataSource(Aws::Utils::Json::JsonView jsonValue);
    TrainingDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data location of the training data source.</p>
     */
    inline const Aws::String& GetDataLocation() const{ return m_dataLocation; }

    /**
     * <p>The data location of the training data source.</p>
     */
    inline bool DataLocationHasBeenSet() const { return m_dataLocationHasBeenSet; }

    /**
     * <p>The data location of the training data source.</p>
     */
    inline void SetDataLocation(const Aws::String& value) { m_dataLocationHasBeenSet = true; m_dataLocation = value; }

    /**
     * <p>The data location of the training data source.</p>
     */
    inline void SetDataLocation(Aws::String&& value) { m_dataLocationHasBeenSet = true; m_dataLocation = std::move(value); }

    /**
     * <p>The data location of the training data source.</p>
     */
    inline void SetDataLocation(const char* value) { m_dataLocationHasBeenSet = true; m_dataLocation.assign(value); }

    /**
     * <p>The data location of the training data source.</p>
     */
    inline TrainingDataSource& WithDataLocation(const Aws::String& value) { SetDataLocation(value); return *this;}

    /**
     * <p>The data location of the training data source.</p>
     */
    inline TrainingDataSource& WithDataLocation(Aws::String&& value) { SetDataLocation(std::move(value)); return *this;}

    /**
     * <p>The data location of the training data source.</p>
     */
    inline TrainingDataSource& WithDataLocation(const char* value) { SetDataLocation(value); return *this;}


    /**
     * <p>The data access role ARN for the training data source.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The data access role ARN for the training data source.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The data access role ARN for the training data source.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The data access role ARN for the training data source.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The data access role ARN for the training data source.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The data access role ARN for the training data source.</p>
     */
    inline TrainingDataSource& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The data access role ARN for the training data source.</p>
     */
    inline TrainingDataSource& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The data access role ARN for the training data source.</p>
     */
    inline TrainingDataSource& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}

  private:

    Aws::String m_dataLocation;
    bool m_dataLocationHasBeenSet;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
