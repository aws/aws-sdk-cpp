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
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes the data source that contains the data to upload to a
   * dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DataSource">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API DataSource
  {
  public:
    DataSource();
    DataSource(Aws::Utils::Json::JsonView jsonValue);
    DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/training-data.csv</code> </p>
     */
    inline const Aws::String& GetDataLocation() const{ return m_dataLocation; }

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/training-data.csv</code> </p>
     */
    inline bool DataLocationHasBeenSet() const { return m_dataLocationHasBeenSet; }

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/training-data.csv</code> </p>
     */
    inline void SetDataLocation(const Aws::String& value) { m_dataLocationHasBeenSet = true; m_dataLocation = value; }

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/training-data.csv</code> </p>
     */
    inline void SetDataLocation(Aws::String&& value) { m_dataLocationHasBeenSet = true; m_dataLocation = std::move(value); }

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/training-data.csv</code> </p>
     */
    inline void SetDataLocation(const char* value) { m_dataLocationHasBeenSet = true; m_dataLocation.assign(value); }

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/training-data.csv</code> </p>
     */
    inline DataSource& WithDataLocation(const Aws::String& value) { SetDataLocation(value); return *this;}

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/training-data.csv</code> </p>
     */
    inline DataSource& WithDataLocation(Aws::String&& value) { SetDataLocation(std::move(value)); return *this;}

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/training-data.csv</code> </p>
     */
    inline DataSource& WithDataLocation(const char* value) { SetDataLocation(value); return *this;}

  private:

    Aws::String m_dataLocation;
    bool m_dataLocationHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
