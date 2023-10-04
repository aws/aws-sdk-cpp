/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/SubscribedProject.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The principal that has the subscription grant for the asset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedPrincipal">AWS
   * API Reference</a></p>
   */
  class SubscribedPrincipal
  {
  public:
    AWS_DATAZONE_API SubscribedPrincipal();
    AWS_DATAZONE_API SubscribedPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The project that has the subscription grant.</p>
     */
    inline const SubscribedProject& GetProject() const{ return m_project; }

    /**
     * <p>The project that has the subscription grant.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The project that has the subscription grant.</p>
     */
    inline void SetProject(const SubscribedProject& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The project that has the subscription grant.</p>
     */
    inline void SetProject(SubscribedProject&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The project that has the subscription grant.</p>
     */
    inline SubscribedPrincipal& WithProject(const SubscribedProject& value) { SetProject(value); return *this;}

    /**
     * <p>The project that has the subscription grant.</p>
     */
    inline SubscribedPrincipal& WithProject(SubscribedProject&& value) { SetProject(std::move(value)); return *this;}

  private:

    SubscribedProject m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
