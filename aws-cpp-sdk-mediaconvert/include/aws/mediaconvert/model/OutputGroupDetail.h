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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/OutputDetail.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Contains details about the output groups specified in the job
   * settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputGroupDetail">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API OutputGroupDetail
  {
  public:
    OutputGroupDetail();
    OutputGroupDetail(Aws::Utils::Json::JsonView jsonValue);
    OutputGroupDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Details about the output
     */
    inline const Aws::Vector<OutputDetail>& GetOutputDetails() const{ return m_outputDetails; }

    /**
     * Details about the output
     */
    inline bool OutputDetailsHasBeenSet() const { return m_outputDetailsHasBeenSet; }

    /**
     * Details about the output
     */
    inline void SetOutputDetails(const Aws::Vector<OutputDetail>& value) { m_outputDetailsHasBeenSet = true; m_outputDetails = value; }

    /**
     * Details about the output
     */
    inline void SetOutputDetails(Aws::Vector<OutputDetail>&& value) { m_outputDetailsHasBeenSet = true; m_outputDetails = std::move(value); }

    /**
     * Details about the output
     */
    inline OutputGroupDetail& WithOutputDetails(const Aws::Vector<OutputDetail>& value) { SetOutputDetails(value); return *this;}

    /**
     * Details about the output
     */
    inline OutputGroupDetail& WithOutputDetails(Aws::Vector<OutputDetail>&& value) { SetOutputDetails(std::move(value)); return *this;}

    /**
     * Details about the output
     */
    inline OutputGroupDetail& AddOutputDetails(const OutputDetail& value) { m_outputDetailsHasBeenSet = true; m_outputDetails.push_back(value); return *this; }

    /**
     * Details about the output
     */
    inline OutputGroupDetail& AddOutputDetails(OutputDetail&& value) { m_outputDetailsHasBeenSet = true; m_outputDetails.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<OutputDetail> m_outputDetails;
    bool m_outputDetailsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
