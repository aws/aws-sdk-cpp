/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/machinelearning/model/EntityStatus.h>
#include <aws/machinelearning/model/RealtimeEndpointInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/machinelearning/model/Algorithm.h>
#include <aws/machinelearning/model/MLModelType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MachineLearning
{
namespace Model
{

  /**
   * <p> Represents the output of a <a>GetMLModel</a> operation. </p> <p>The content
   * consists of the detailed metadata and the current status of the
   * <code>MLModel</code>.</p>
   */
  class AWS_MACHINELEARNING_API MLModel
  {
  public:
    MLModel();
    MLModel(const Aws::Utils::Json::JsonValue& jsonValue);
    MLModel& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline MLModel& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline MLModel& WithMLModelId(Aws::String&& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID assigned to the <code>MLModel</code> at creation.</p>
     */
    inline MLModel& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID of the training <code>DataSource</code>. The <a>CreateMLModel</a>
     * operation uses the <code>TrainingDataSourceId</code>.</p>
     */
    inline const Aws::String& GetTrainingDataSourceId() const{ return m_trainingDataSourceId; }

    /**
     * <p>The ID of the training <code>DataSource</code>. The <a>CreateMLModel</a>
     * operation uses the <code>TrainingDataSourceId</code>.</p>
     */
    inline void SetTrainingDataSourceId(const Aws::String& value) { m_trainingDataSourceIdHasBeenSet = true; m_trainingDataSourceId = value; }

    /**
     * <p>The ID of the training <code>DataSource</code>. The <a>CreateMLModel</a>
     * operation uses the <code>TrainingDataSourceId</code>.</p>
     */
    inline void SetTrainingDataSourceId(Aws::String&& value) { m_trainingDataSourceIdHasBeenSet = true; m_trainingDataSourceId = value; }

    /**
     * <p>The ID of the training <code>DataSource</code>. The <a>CreateMLModel</a>
     * operation uses the <code>TrainingDataSourceId</code>.</p>
     */
    inline void SetTrainingDataSourceId(const char* value) { m_trainingDataSourceIdHasBeenSet = true; m_trainingDataSourceId.assign(value); }

    /**
     * <p>The ID of the training <code>DataSource</code>. The <a>CreateMLModel</a>
     * operation uses the <code>TrainingDataSourceId</code>.</p>
     */
    inline MLModel& WithTrainingDataSourceId(const Aws::String& value) { SetTrainingDataSourceId(value); return *this;}

    /**
     * <p>The ID of the training <code>DataSource</code>. The <a>CreateMLModel</a>
     * operation uses the <code>TrainingDataSourceId</code>.</p>
     */
    inline MLModel& WithTrainingDataSourceId(Aws::String&& value) { SetTrainingDataSourceId(value); return *this;}

    /**
     * <p>The ID of the training <code>DataSource</code>. The <a>CreateMLModel</a>
     * operation uses the <code>TrainingDataSourceId</code>.</p>
     */
    inline MLModel& WithTrainingDataSourceId(const char* value) { SetTrainingDataSourceId(value); return *this;}

    /**
     * <p>The AWS user account from which the <code>MLModel</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const{ return m_createdByIamUser; }

    /**
     * <p>The AWS user account from which the <code>MLModel</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(const Aws::String& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = value; }

    /**
     * <p>The AWS user account from which the <code>MLModel</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(Aws::String&& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = value; }

    /**
     * <p>The AWS user account from which the <code>MLModel</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(const char* value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser.assign(value); }

    /**
     * <p>The AWS user account from which the <code>MLModel</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline MLModel& WithCreatedByIamUser(const Aws::String& value) { SetCreatedByIamUser(value); return *this;}

    /**
     * <p>The AWS user account from which the <code>MLModel</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline MLModel& WithCreatedByIamUser(Aws::String&& value) { SetCreatedByIamUser(value); return *this;}

    /**
     * <p>The AWS user account from which the <code>MLModel</code> was created. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline MLModel& WithCreatedByIamUser(const char* value) { SetCreatedByIamUser(value); return *this;}

    /**
     * <p>The time that the <code>MLModel</code> was created. The time is expressed in
     * epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time that the <code>MLModel</code> was created. The time is expressed in
     * epoch time.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that the <code>MLModel</code> was created. The time is expressed in
     * epoch time.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that the <code>MLModel</code> was created. The time is expressed in
     * epoch time.</p>
     */
    inline MLModel& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that the <code>MLModel</code> was created. The time is expressed in
     * epoch time.</p>
     */
    inline MLModel& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time of the most recent edit to the <code>MLModel</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time of the most recent edit to the <code>MLModel</code>. The time is
     * expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time of the most recent edit to the <code>MLModel</code>. The time is
     * expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time of the most recent edit to the <code>MLModel</code>. The time is
     * expressed in epoch time.</p>
     */
    inline MLModel& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time of the most recent edit to the <code>MLModel</code>. The time is
     * expressed in epoch time.</p>
     */
    inline MLModel& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline MLModel& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline MLModel& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>MLModel</code>.</p>
     */
    inline MLModel& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The current status of an <code>MLModel</code>. This element can have one of
     * the following values: </p> <ul> <li>PENDING - Amazon Machine Learning (Amazon
     * ML) submitted a request to create an <code>MLModel</code>.</li> <li>INPROGRESS -
     * The creation process is underway.</li> <li>FAILED - The request to create an
     * <code>MLModel</code> did not run to completion. It is not usable.</li>
     * <li>COMPLETED - The creation process completed successfully.</li> <li>DELETED -
     * The <code>MLModel</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline const EntityStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of an <code>MLModel</code>. This element can have one of
     * the following values: </p> <ul> <li>PENDING - Amazon Machine Learning (Amazon
     * ML) submitted a request to create an <code>MLModel</code>.</li> <li>INPROGRESS -
     * The creation process is underway.</li> <li>FAILED - The request to create an
     * <code>MLModel</code> did not run to completion. It is not usable.</li>
     * <li>COMPLETED - The creation process completed successfully.</li> <li>DELETED -
     * The <code>MLModel</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(const EntityStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of an <code>MLModel</code>. This element can have one of
     * the following values: </p> <ul> <li>PENDING - Amazon Machine Learning (Amazon
     * ML) submitted a request to create an <code>MLModel</code>.</li> <li>INPROGRESS -
     * The creation process is underway.</li> <li>FAILED - The request to create an
     * <code>MLModel</code> did not run to completion. It is not usable.</li>
     * <li>COMPLETED - The creation process completed successfully.</li> <li>DELETED -
     * The <code>MLModel</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(EntityStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of an <code>MLModel</code>. This element can have one of
     * the following values: </p> <ul> <li>PENDING - Amazon Machine Learning (Amazon
     * ML) submitted a request to create an <code>MLModel</code>.</li> <li>INPROGRESS -
     * The creation process is underway.</li> <li>FAILED - The request to create an
     * <code>MLModel</code> did not run to completion. It is not usable.</li>
     * <li>COMPLETED - The creation process completed successfully.</li> <li>DELETED -
     * The <code>MLModel</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline MLModel& WithStatus(const EntityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of an <code>MLModel</code>. This element can have one of
     * the following values: </p> <ul> <li>PENDING - Amazon Machine Learning (Amazon
     * ML) submitted a request to create an <code>MLModel</code>.</li> <li>INPROGRESS -
     * The creation process is underway.</li> <li>FAILED - The request to create an
     * <code>MLModel</code> did not run to completion. It is not usable.</li>
     * <li>COMPLETED - The creation process completed successfully.</li> <li>DELETED -
     * The <code>MLModel</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline MLModel& WithStatus(EntityStatus&& value) { SetStatus(value); return *this;}

    
    inline long long GetSizeInBytes() const{ return m_sizeInBytes; }

    
    inline void SetSizeInBytes(long long value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }

    
    inline MLModel& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}

    /**
     * <p>The current endpoint of the <code>MLModel</code>.</p>
     */
    inline const RealtimeEndpointInfo& GetEndpointInfo() const{ return m_endpointInfo; }

    /**
     * <p>The current endpoint of the <code>MLModel</code>.</p>
     */
    inline void SetEndpointInfo(const RealtimeEndpointInfo& value) { m_endpointInfoHasBeenSet = true; m_endpointInfo = value; }

    /**
     * <p>The current endpoint of the <code>MLModel</code>.</p>
     */
    inline void SetEndpointInfo(RealtimeEndpointInfo&& value) { m_endpointInfoHasBeenSet = true; m_endpointInfo = value; }

    /**
     * <p>The current endpoint of the <code>MLModel</code>.</p>
     */
    inline MLModel& WithEndpointInfo(const RealtimeEndpointInfo& value) { SetEndpointInfo(value); return *this;}

    /**
     * <p>The current endpoint of the <code>MLModel</code>.</p>
     */
    inline MLModel& WithEndpointInfo(RealtimeEndpointInfo&& value) { SetEndpointInfo(value); return *this;}

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTrainingParameters() const{ return m_trainingParameters; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline void SetTrainingParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters = value; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline void SetTrainingParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters = value; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline MLModel& WithTrainingParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTrainingParameters(value); return *this;}

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline MLModel& WithTrainingParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTrainingParameters(value); return *this;}

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline MLModel& AddTrainingParameters(const Aws::String& key, const Aws::String& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters[key] = value; return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline MLModel& AddTrainingParameters(Aws::String&& key, const Aws::String& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters[key] = value; return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline MLModel& AddTrainingParameters(const Aws::String& key, Aws::String&& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters[key] = value; return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline MLModel& AddTrainingParameters(Aws::String&& key, Aws::String&& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters[key] = value; return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline MLModel& AddTrainingParameters(const char* key, Aws::String&& value) { m_trainingParametersHasBeenSet = true; m_trainingParameters[key] = value; return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline MLModel& AddTrainingParameters(Aws::String&& key, const char* value) { m_trainingParametersHasBeenSet = true; m_trainingParameters[key] = value; return *this; }

    /**
     * <p>A list of the training parameters in the <code>MLModel</code>. The list is
     * implemented as a map of key/value pairs.</p> <p>The following is the current set
     * of training parameters: </p> <ul> <li>
     * <p><code>sgd.l1RegularizationAmount</code> - Coefficient regularization L1 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to zero, resulting in a sparse feature set. If you use this
     * parameter, specify a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The value
     * is a double that ranges from 0 to MAX_DOUBLE. The default is not to use L1
     * normalization. The parameter cannot be used when <code>L2</code> is specified.
     * Use this parameter sparingly.</p> </li> <li>
     * <p><code>sgd.l2RegularizationAmount</code> - Coefficient regularization L2 norm.
     * It controls overfitting the data by penalizing large coefficients. This tends to
     * drive coefficients to small, nonzero values. If you use this parameter, specify
     * a small value, such as 1.0E-04 or 1.0E-08.</p> <p>The valus is a double that
     * ranges from 0 to MAX_DOUBLE. The default is not to use L2 normalization. This
     * cannot be used when <code>L1</code> is specified. Use this parameter
     * sparingly.</p> </li> <li><p><code>sgd.maxPasses</code> - Number of times that
     * the training process traverses the observations to build the
     * <code>MLModel</code>. The value is an integer that ranges from 1 to 10000. The
     * default value is 10. </p></li> <li> <p><code>sgd.maxMLModelSizeInBytes</code> -
     * Maximum allowed size of the model. Depending on the input data, the model size
     * might affect performance. </p> <p> The value is an integer that ranges from
     * 100000 to 2147483648. The default value is 33554432. </p> </li> </ul>
     */
    inline MLModel& AddTrainingParameters(const char* key, const char* value) { m_trainingParametersHasBeenSet = true; m_trainingParameters[key] = value; return *this; }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline const Aws::String& GetInputDataLocationS3() const{ return m_inputDataLocationS3; }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetInputDataLocationS3(const Aws::String& value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3 = value; }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetInputDataLocationS3(Aws::String&& value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3 = value; }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetInputDataLocationS3(const char* value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3.assign(value); }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline MLModel& WithInputDataLocationS3(const Aws::String& value) { SetInputDataLocationS3(value); return *this;}

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline MLModel& WithInputDataLocationS3(Aws::String&& value) { SetInputDataLocationS3(value); return *this;}

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline MLModel& WithInputDataLocationS3(const char* value) { SetInputDataLocationS3(value); return *this;}

    /**
     * <p>The algorithm used to train the <code>MLModel</code>. The following algorithm
     * is supported:</p> <ul> <li>SGD -- Stochastic gradient descent. The goal of SGD
     * is to minimize the gradient of the loss function. </li> </ul>
     */
    inline const Algorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * <p>The algorithm used to train the <code>MLModel</code>. The following algorithm
     * is supported:</p> <ul> <li>SGD -- Stochastic gradient descent. The goal of SGD
     * is to minimize the gradient of the loss function. </li> </ul>
     */
    inline void SetAlgorithm(const Algorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * <p>The algorithm used to train the <code>MLModel</code>. The following algorithm
     * is supported:</p> <ul> <li>SGD -- Stochastic gradient descent. The goal of SGD
     * is to minimize the gradient of the loss function. </li> </ul>
     */
    inline void SetAlgorithm(Algorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * <p>The algorithm used to train the <code>MLModel</code>. The following algorithm
     * is supported:</p> <ul> <li>SGD -- Stochastic gradient descent. The goal of SGD
     * is to minimize the gradient of the loss function. </li> </ul>
     */
    inline MLModel& WithAlgorithm(const Algorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * <p>The algorithm used to train the <code>MLModel</code>. The following algorithm
     * is supported:</p> <ul> <li>SGD -- Stochastic gradient descent. The goal of SGD
     * is to minimize the gradient of the loss function. </li> </ul>
     */
    inline MLModel& WithAlgorithm(Algorithm&& value) { SetAlgorithm(value); return *this;}

    /**
     * <p>Identifies the <code>MLModel</code> category. The following are the available
     * types:</p> <ul> <li>REGRESSION - Produces a numeric result. For example, "What
     * listing price should a house have?".</li> <li>BINARY - Produces one of two
     * possible results. For example, "Is this a child-friendly web site?".</li>
     * <li>MULTICLASS - Produces more than two possible results. For example, "Is this
     * a HIGH, LOW or MEDIUM risk trade?".</li> </ul>
     */
    inline const MLModelType& GetMLModelType() const{ return m_mLModelType; }

    /**
     * <p>Identifies the <code>MLModel</code> category. The following are the available
     * types:</p> <ul> <li>REGRESSION - Produces a numeric result. For example, "What
     * listing price should a house have?".</li> <li>BINARY - Produces one of two
     * possible results. For example, "Is this a child-friendly web site?".</li>
     * <li>MULTICLASS - Produces more than two possible results. For example, "Is this
     * a HIGH, LOW or MEDIUM risk trade?".</li> </ul>
     */
    inline void SetMLModelType(const MLModelType& value) { m_mLModelTypeHasBeenSet = true; m_mLModelType = value; }

    /**
     * <p>Identifies the <code>MLModel</code> category. The following are the available
     * types:</p> <ul> <li>REGRESSION - Produces a numeric result. For example, "What
     * listing price should a house have?".</li> <li>BINARY - Produces one of two
     * possible results. For example, "Is this a child-friendly web site?".</li>
     * <li>MULTICLASS - Produces more than two possible results. For example, "Is this
     * a HIGH, LOW or MEDIUM risk trade?".</li> </ul>
     */
    inline void SetMLModelType(MLModelType&& value) { m_mLModelTypeHasBeenSet = true; m_mLModelType = value; }

    /**
     * <p>Identifies the <code>MLModel</code> category. The following are the available
     * types:</p> <ul> <li>REGRESSION - Produces a numeric result. For example, "What
     * listing price should a house have?".</li> <li>BINARY - Produces one of two
     * possible results. For example, "Is this a child-friendly web site?".</li>
     * <li>MULTICLASS - Produces more than two possible results. For example, "Is this
     * a HIGH, LOW or MEDIUM risk trade?".</li> </ul>
     */
    inline MLModel& WithMLModelType(const MLModelType& value) { SetMLModelType(value); return *this;}

    /**
     * <p>Identifies the <code>MLModel</code> category. The following are the available
     * types:</p> <ul> <li>REGRESSION - Produces a numeric result. For example, "What
     * listing price should a house have?".</li> <li>BINARY - Produces one of two
     * possible results. For example, "Is this a child-friendly web site?".</li>
     * <li>MULTICLASS - Produces more than two possible results. For example, "Is this
     * a HIGH, LOW or MEDIUM risk trade?".</li> </ul>
     */
    inline MLModel& WithMLModelType(MLModelType&& value) { SetMLModelType(value); return *this;}

    
    inline double GetScoreThreshold() const{ return m_scoreThreshold; }

    
    inline void SetScoreThreshold(double value) { m_scoreThresholdHasBeenSet = true; m_scoreThreshold = value; }

    
    inline MLModel& WithScoreThreshold(double value) { SetScoreThreshold(value); return *this;}

    /**
     * <p>The time of the most recent edit to the <code>ScoreThreshold</code>. The time
     * is expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetScoreThresholdLastUpdatedAt() const{ return m_scoreThresholdLastUpdatedAt; }

    /**
     * <p>The time of the most recent edit to the <code>ScoreThreshold</code>. The time
     * is expressed in epoch time.</p>
     */
    inline void SetScoreThresholdLastUpdatedAt(const Aws::Utils::DateTime& value) { m_scoreThresholdLastUpdatedAtHasBeenSet = true; m_scoreThresholdLastUpdatedAt = value; }

    /**
     * <p>The time of the most recent edit to the <code>ScoreThreshold</code>. The time
     * is expressed in epoch time.</p>
     */
    inline void SetScoreThresholdLastUpdatedAt(Aws::Utils::DateTime&& value) { m_scoreThresholdLastUpdatedAtHasBeenSet = true; m_scoreThresholdLastUpdatedAt = value; }

    /**
     * <p>The time of the most recent edit to the <code>ScoreThreshold</code>. The time
     * is expressed in epoch time.</p>
     */
    inline MLModel& WithScoreThresholdLastUpdatedAt(const Aws::Utils::DateTime& value) { SetScoreThresholdLastUpdatedAt(value); return *this;}

    /**
     * <p>The time of the most recent edit to the <code>ScoreThreshold</code>. The time
     * is expressed in epoch time.</p>
     */
    inline MLModel& WithScoreThresholdLastUpdatedAt(Aws::Utils::DateTime&& value) { SetScoreThresholdLastUpdatedAt(value); return *this;}

    /**
     * <p>A description of the most recent details about accessing the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the most recent details about accessing the
     * <code>MLModel</code>.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the most recent details about accessing the
     * <code>MLModel</code>.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the most recent details about accessing the
     * <code>MLModel</code>.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the most recent details about accessing the
     * <code>MLModel</code>.</p>
     */
    inline MLModel& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the most recent details about accessing the
     * <code>MLModel</code>.</p>
     */
    inline MLModel& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the most recent details about accessing the
     * <code>MLModel</code>.</p>
     */
    inline MLModel& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:
    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet;
    Aws::String m_trainingDataSourceId;
    bool m_trainingDataSourceIdHasBeenSet;
    Aws::String m_createdByIamUser;
    bool m_createdByIamUserHasBeenSet;
    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;
    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    EntityStatus m_status;
    bool m_statusHasBeenSet;
    long long m_sizeInBytes;
    bool m_sizeInBytesHasBeenSet;
    RealtimeEndpointInfo m_endpointInfo;
    bool m_endpointInfoHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_trainingParameters;
    bool m_trainingParametersHasBeenSet;
    Aws::String m_inputDataLocationS3;
    bool m_inputDataLocationS3HasBeenSet;
    Algorithm m_algorithm;
    bool m_algorithmHasBeenSet;
    MLModelType m_mLModelType;
    bool m_mLModelTypeHasBeenSet;
    double m_scoreThreshold;
    bool m_scoreThresholdHasBeenSet;
    Aws::Utils::DateTime m_scoreThresholdLastUpdatedAt;
    bool m_scoreThresholdLastUpdatedAtHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
