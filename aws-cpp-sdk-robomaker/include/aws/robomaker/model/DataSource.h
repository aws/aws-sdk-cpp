/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/S3KeyOutput.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DataSource">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API DataSource
  {
  public:
    DataSource();
    DataSource(Aws::Utils::Json::JsonView jsonValue);
    DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline DataSource& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline DataSource& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline DataSource& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline const Aws::Vector<S3KeyOutput>& GetS3Keys() const{ return m_s3Keys; }

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline bool S3KeysHasBeenSet() const { return m_s3KeysHasBeenSet; }

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline void SetS3Keys(const Aws::Vector<S3KeyOutput>& value) { m_s3KeysHasBeenSet = true; m_s3Keys = value; }

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline void SetS3Keys(Aws::Vector<S3KeyOutput>&& value) { m_s3KeysHasBeenSet = true; m_s3Keys = std::move(value); }

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline DataSource& WithS3Keys(const Aws::Vector<S3KeyOutput>& value) { SetS3Keys(value); return *this;}

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline DataSource& WithS3Keys(Aws::Vector<S3KeyOutput>&& value) { SetS3Keys(std::move(value)); return *this;}

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline DataSource& AddS3Keys(const S3KeyOutput& value) { m_s3KeysHasBeenSet = true; m_s3Keys.push_back(value); return *this; }

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline DataSource& AddS3Keys(S3KeyOutput&& value) { m_s3KeysHasBeenSet = true; m_s3Keys.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    Aws::Vector<S3KeyOutput> m_s3Keys;
    bool m_s3KeysHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
