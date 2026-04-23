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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Limits that are applicable for given storage type. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/StorageTypeLimit">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API StorageTypeLimit
  {
  public:
    StorageTypeLimit();
    StorageTypeLimit(Aws::Utils::Json::JsonView jsonValue);
    StorageTypeLimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Name of storage limits that are applicable for given storage type. If <code>
     * <a>StorageType</a> </code> is ebs, following storage options are applicable <ol>
     * <li>MinimumVolumeSize</li> Minimum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable.
     * <li>MaximumVolumeSize</li> Maximum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable. <li>MaximumIops</li>
     * Maximum amount of Iops that is applicable for given storage type.It can be empty
     * if it is not applicable. <li>MinimumIops</li> Minimum amount of Iops that is
     * applicable for given storage type.It can be empty if it is not applicable. </ol>
     * </p>
     */
    inline const Aws::String& GetLimitName() const{ return m_limitName; }

    /**
     * <p> Name of storage limits that are applicable for given storage type. If <code>
     * <a>StorageType</a> </code> is ebs, following storage options are applicable <ol>
     * <li>MinimumVolumeSize</li> Minimum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable.
     * <li>MaximumVolumeSize</li> Maximum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable. <li>MaximumIops</li>
     * Maximum amount of Iops that is applicable for given storage type.It can be empty
     * if it is not applicable. <li>MinimumIops</li> Minimum amount of Iops that is
     * applicable for given storage type.It can be empty if it is not applicable. </ol>
     * </p>
     */
    inline bool LimitNameHasBeenSet() const { return m_limitNameHasBeenSet; }

    /**
     * <p> Name of storage limits that are applicable for given storage type. If <code>
     * <a>StorageType</a> </code> is ebs, following storage options are applicable <ol>
     * <li>MinimumVolumeSize</li> Minimum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable.
     * <li>MaximumVolumeSize</li> Maximum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable. <li>MaximumIops</li>
     * Maximum amount of Iops that is applicable for given storage type.It can be empty
     * if it is not applicable. <li>MinimumIops</li> Minimum amount of Iops that is
     * applicable for given storage type.It can be empty if it is not applicable. </ol>
     * </p>
     */
    inline void SetLimitName(const Aws::String& value) { m_limitNameHasBeenSet = true; m_limitName = value; }

    /**
     * <p> Name of storage limits that are applicable for given storage type. If <code>
     * <a>StorageType</a> </code> is ebs, following storage options are applicable <ol>
     * <li>MinimumVolumeSize</li> Minimum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable.
     * <li>MaximumVolumeSize</li> Maximum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable. <li>MaximumIops</li>
     * Maximum amount of Iops that is applicable for given storage type.It can be empty
     * if it is not applicable. <li>MinimumIops</li> Minimum amount of Iops that is
     * applicable for given storage type.It can be empty if it is not applicable. </ol>
     * </p>
     */
    inline void SetLimitName(Aws::String&& value) { m_limitNameHasBeenSet = true; m_limitName = std::move(value); }

    /**
     * <p> Name of storage limits that are applicable for given storage type. If <code>
     * <a>StorageType</a> </code> is ebs, following storage options are applicable <ol>
     * <li>MinimumVolumeSize</li> Minimum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable.
     * <li>MaximumVolumeSize</li> Maximum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable. <li>MaximumIops</li>
     * Maximum amount of Iops that is applicable for given storage type.It can be empty
     * if it is not applicable. <li>MinimumIops</li> Minimum amount of Iops that is
     * applicable for given storage type.It can be empty if it is not applicable. </ol>
     * </p>
     */
    inline void SetLimitName(const char* value) { m_limitNameHasBeenSet = true; m_limitName.assign(value); }

    /**
     * <p> Name of storage limits that are applicable for given storage type. If <code>
     * <a>StorageType</a> </code> is ebs, following storage options are applicable <ol>
     * <li>MinimumVolumeSize</li> Minimum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable.
     * <li>MaximumVolumeSize</li> Maximum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable. <li>MaximumIops</li>
     * Maximum amount of Iops that is applicable for given storage type.It can be empty
     * if it is not applicable. <li>MinimumIops</li> Minimum amount of Iops that is
     * applicable for given storage type.It can be empty if it is not applicable. </ol>
     * </p>
     */
    inline StorageTypeLimit& WithLimitName(const Aws::String& value) { SetLimitName(value); return *this;}

    /**
     * <p> Name of storage limits that are applicable for given storage type. If <code>
     * <a>StorageType</a> </code> is ebs, following storage options are applicable <ol>
     * <li>MinimumVolumeSize</li> Minimum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable.
     * <li>MaximumVolumeSize</li> Maximum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable. <li>MaximumIops</li>
     * Maximum amount of Iops that is applicable for given storage type.It can be empty
     * if it is not applicable. <li>MinimumIops</li> Minimum amount of Iops that is
     * applicable for given storage type.It can be empty if it is not applicable. </ol>
     * </p>
     */
    inline StorageTypeLimit& WithLimitName(Aws::String&& value) { SetLimitName(std::move(value)); return *this;}

    /**
     * <p> Name of storage limits that are applicable for given storage type. If <code>
     * <a>StorageType</a> </code> is ebs, following storage options are applicable <ol>
     * <li>MinimumVolumeSize</li> Minimum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable.
     * <li>MaximumVolumeSize</li> Maximum amount of volume size that is applicable for
     * given storage type.It can be empty if it is not applicable. <li>MaximumIops</li>
     * Maximum amount of Iops that is applicable for given storage type.It can be empty
     * if it is not applicable. <li>MinimumIops</li> Minimum amount of Iops that is
     * applicable for given storage type.It can be empty if it is not applicable. </ol>
     * </p>
     */
    inline StorageTypeLimit& WithLimitName(const char* value) { SetLimitName(value); return *this;}


    /**
     * <p> Values for the <code> <a>StorageTypeLimit$LimitName</a> </code> . </p>
     */
    inline const Aws::Vector<Aws::String>& GetLimitValues() const{ return m_limitValues; }

    /**
     * <p> Values for the <code> <a>StorageTypeLimit$LimitName</a> </code> . </p>
     */
    inline bool LimitValuesHasBeenSet() const { return m_limitValuesHasBeenSet; }

    /**
     * <p> Values for the <code> <a>StorageTypeLimit$LimitName</a> </code> . </p>
     */
    inline void SetLimitValues(const Aws::Vector<Aws::String>& value) { m_limitValuesHasBeenSet = true; m_limitValues = value; }

    /**
     * <p> Values for the <code> <a>StorageTypeLimit$LimitName</a> </code> . </p>
     */
    inline void SetLimitValues(Aws::Vector<Aws::String>&& value) { m_limitValuesHasBeenSet = true; m_limitValues = std::move(value); }

    /**
     * <p> Values for the <code> <a>StorageTypeLimit$LimitName</a> </code> . </p>
     */
    inline StorageTypeLimit& WithLimitValues(const Aws::Vector<Aws::String>& value) { SetLimitValues(value); return *this;}

    /**
     * <p> Values for the <code> <a>StorageTypeLimit$LimitName</a> </code> . </p>
     */
    inline StorageTypeLimit& WithLimitValues(Aws::Vector<Aws::String>&& value) { SetLimitValues(std::move(value)); return *this;}

    /**
     * <p> Values for the <code> <a>StorageTypeLimit$LimitName</a> </code> . </p>
     */
    inline StorageTypeLimit& AddLimitValues(const Aws::String& value) { m_limitValuesHasBeenSet = true; m_limitValues.push_back(value); return *this; }

    /**
     * <p> Values for the <code> <a>StorageTypeLimit$LimitName</a> </code> . </p>
     */
    inline StorageTypeLimit& AddLimitValues(Aws::String&& value) { m_limitValuesHasBeenSet = true; m_limitValues.push_back(std::move(value)); return *this; }

    /**
     * <p> Values for the <code> <a>StorageTypeLimit$LimitName</a> </code> . </p>
     */
    inline StorageTypeLimit& AddLimitValues(const char* value) { m_limitValuesHasBeenSet = true; m_limitValues.push_back(value); return *this; }

  private:

    Aws::String m_limitName;
    bool m_limitNameHasBeenSet;

    Aws::Vector<Aws::String> m_limitValues;
    bool m_limitValuesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
