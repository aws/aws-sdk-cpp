/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The location of the most recent parallel data input file that was
   * successfully imported into Amazon Translate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/ParallelDataDataLocation">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSLATE_API ParallelDataDataLocation
  {
  public:
    ParallelDataDataLocation();
    ParallelDataDataLocation(Aws::Utils::Json::JsonView jsonValue);
    ParallelDataDataLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the repository that contains the parallel data input file.</p>
     */
    inline const Aws::String& GetRepositoryType() const{ return m_repositoryType; }

    /**
     * <p>Describes the repository that contains the parallel data input file.</p>
     */
    inline bool RepositoryTypeHasBeenSet() const { return m_repositoryTypeHasBeenSet; }

    /**
     * <p>Describes the repository that contains the parallel data input file.</p>
     */
    inline void SetRepositoryType(const Aws::String& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = value; }

    /**
     * <p>Describes the repository that contains the parallel data input file.</p>
     */
    inline void SetRepositoryType(Aws::String&& value) { m_repositoryTypeHasBeenSet = true; m_repositoryType = std::move(value); }

    /**
     * <p>Describes the repository that contains the parallel data input file.</p>
     */
    inline void SetRepositoryType(const char* value) { m_repositoryTypeHasBeenSet = true; m_repositoryType.assign(value); }

    /**
     * <p>Describes the repository that contains the parallel data input file.</p>
     */
    inline ParallelDataDataLocation& WithRepositoryType(const Aws::String& value) { SetRepositoryType(value); return *this;}

    /**
     * <p>Describes the repository that contains the parallel data input file.</p>
     */
    inline ParallelDataDataLocation& WithRepositoryType(Aws::String&& value) { SetRepositoryType(std::move(value)); return *this;}

    /**
     * <p>Describes the repository that contains the parallel data input file.</p>
     */
    inline ParallelDataDataLocation& WithRepositoryType(const char* value) { SetRepositoryType(value); return *this;}


    /**
     * <p>The Amazon S3 location of the parallel data input file. The location is
     * returned as a presigned URL to that has a 30 minute expiration.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The Amazon S3 location of the parallel data input file. The location is
     * returned as a presigned URL to that has a 30 minute expiration.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The Amazon S3 location of the parallel data input file. The location is
     * returned as a presigned URL to that has a 30 minute expiration.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The Amazon S3 location of the parallel data input file. The location is
     * returned as a presigned URL to that has a 30 minute expiration.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The Amazon S3 location of the parallel data input file. The location is
     * returned as a presigned URL to that has a 30 minute expiration.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The Amazon S3 location of the parallel data input file. The location is
     * returned as a presigned URL to that has a 30 minute expiration.</p>
     */
    inline ParallelDataDataLocation& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The Amazon S3 location of the parallel data input file. The location is
     * returned as a presigned URL to that has a 30 minute expiration.</p>
     */
    inline ParallelDataDataLocation& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of the parallel data input file. The location is
     * returned as a presigned URL to that has a 30 minute expiration.</p>
     */
    inline ParallelDataDataLocation& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    Aws::String m_repositoryType;
    bool m_repositoryTypeHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
