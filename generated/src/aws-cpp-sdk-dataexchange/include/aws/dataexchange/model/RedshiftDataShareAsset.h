/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>The Amazon Redshift datashare asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/RedshiftDataShareAsset">AWS
   * API Reference</a></p>
   */
  class RedshiftDataShareAsset
  {
  public:
    AWS_DATAEXCHANGE_API RedshiftDataShareAsset();
    AWS_DATAEXCHANGE_API RedshiftDataShareAsset(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API RedshiftDataShareAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the datashare asset.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RedshiftDataShareAsset& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RedshiftDataShareAsset& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RedshiftDataShareAsset& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
