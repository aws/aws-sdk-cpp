/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class UpdateCapacityReservationRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API UpdateCapacityReservationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCapacityReservation"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The new number of requested data processing units.</p>
     */
    inline int GetTargetDpus() const{ return m_targetDpus; }

    /**
     * <p>The new number of requested data processing units.</p>
     */
    inline bool TargetDpusHasBeenSet() const { return m_targetDpusHasBeenSet; }

    /**
     * <p>The new number of requested data processing units.</p>
     */
    inline void SetTargetDpus(int value) { m_targetDpusHasBeenSet = true; m_targetDpus = value; }

    /**
     * <p>The new number of requested data processing units.</p>
     */
    inline UpdateCapacityReservationRequest& WithTargetDpus(int value) { SetTargetDpus(value); return *this;}


    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline UpdateCapacityReservationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline UpdateCapacityReservationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the capacity reservation.</p>
     */
    inline UpdateCapacityReservationRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    int m_targetDpus;
    bool m_targetDpusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
