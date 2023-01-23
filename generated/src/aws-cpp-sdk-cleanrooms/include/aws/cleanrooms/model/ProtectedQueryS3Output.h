/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Contains output information for protected queries with an S3 output
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryS3Output">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryS3Output
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryS3Output();
    AWS_CLEANROOMS_API ProtectedQueryS3Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryS3Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 location of the result.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The S3 location of the result.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The S3 location of the result.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The S3 location of the result.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The S3 location of the result.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The S3 location of the result.</p>
     */
    inline ProtectedQueryS3Output& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The S3 location of the result.</p>
     */
    inline ProtectedQueryS3Output& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The S3 location of the result.</p>
     */
    inline ProtectedQueryS3Output& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
