/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/Total.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information on the sum of usage based on an Amazon Web Services
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UsageResourceResult">AWS
   * API Reference</a></p>
   */
  class UsageResourceResult
  {
  public:
    AWS_GUARDDUTY_API UsageResourceResult();
    AWS_GUARDDUTY_API UsageResourceResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageResourceResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services resource that generated usage.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline UsageResourceResult& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline UsageResourceResult& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline UsageResourceResult& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the sum total of usage for the specified resource type.</p>
     */
    inline const Total& GetTotal() const{ return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(const Total& value) { m_totalHasBeenSet = true; m_total = value; }
    inline void SetTotal(Total&& value) { m_totalHasBeenSet = true; m_total = std::move(value); }
    inline UsageResourceResult& WithTotal(const Total& value) { SetTotal(value); return *this;}
    inline UsageResourceResult& WithTotal(Total&& value) { SetTotal(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Total m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
