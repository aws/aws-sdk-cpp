/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ManifestFileLocation.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>S3 parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/S3Parameters">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API S3Parameters
  {
  public:
    S3Parameters();
    S3Parameters(Aws::Utils::Json::JsonView jsonValue);
    S3Parameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded in the console.</p>
     */
    inline const ManifestFileLocation& GetManifestFileLocation() const{ return m_manifestFileLocation; }

    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded in the console.</p>
     */
    inline bool ManifestFileLocationHasBeenSet() const { return m_manifestFileLocationHasBeenSet; }

    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded in the console.</p>
     */
    inline void SetManifestFileLocation(const ManifestFileLocation& value) { m_manifestFileLocationHasBeenSet = true; m_manifestFileLocation = value; }

    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded in the console.</p>
     */
    inline void SetManifestFileLocation(ManifestFileLocation&& value) { m_manifestFileLocationHasBeenSet = true; m_manifestFileLocation = std::move(value); }

    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded in the console.</p>
     */
    inline S3Parameters& WithManifestFileLocation(const ManifestFileLocation& value) { SetManifestFileLocation(value); return *this;}

    /**
     * <p>Location of the Amazon S3 manifest file. This is NULL if the manifest file
     * was uploaded in the console.</p>
     */
    inline S3Parameters& WithManifestFileLocation(ManifestFileLocation&& value) { SetManifestFileLocation(std::move(value)); return *this;}

  private:

    ManifestFileLocation m_manifestFileLocation;
    bool m_manifestFileLocationHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
