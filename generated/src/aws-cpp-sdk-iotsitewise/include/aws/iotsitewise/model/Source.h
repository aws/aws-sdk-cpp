/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/Location.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The data source for the dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Source">AWS
   * API Reference</a></p>
   */
  class Source
  {
  public:
    AWS_IOTSITEWISE_API Source();
    AWS_IOTSITEWISE_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the ARN of the dataset. If the source is Kendra, it's the ARN of the
     * Kendra index.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Source& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Source& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Source& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the location information where the cited text is originally stored.
     * For example, if the data source is Kendra, and the text synchronized is from an
     * S3 bucket, then the location refers to an S3 object.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline Source& WithLocation(const Location& value) { SetLocation(value); return *this;}
    inline Source& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
