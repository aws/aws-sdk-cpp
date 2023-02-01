/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Describes the metadata of the S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/S3BucketInfo">AWS
   * API Reference</a></p>
   */
  class S3BucketInfo
  {
  public:
    AWS_AMPLIFYBACKEND_API S3BucketInfo();
    AWS_AMPLIFYBACKEND_API S3BucketInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API S3BucketInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The creation date of the S3 bucket.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date of the S3 bucket.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The creation date of the S3 bucket.</p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date of the S3 bucket.</p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date of the S3 bucket.</p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The creation date of the S3 bucket.</p>
     */
    inline S3BucketInfo& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date of the S3 bucket.</p>
     */
    inline S3BucketInfo& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The creation date of the S3 bucket.</p>
     */
    inline S3BucketInfo& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline S3BucketInfo& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline S3BucketInfo& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket.</p>
     */
    inline S3BucketInfo& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
