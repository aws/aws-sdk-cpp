/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The project that has the subscription grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedProject">AWS
   * API Reference</a></p>
   */
  class SubscribedProject
  {
  public:
    AWS_DATAZONE_API SubscribedProject();
    AWS_DATAZONE_API SubscribedProject(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedProject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the project that has the subscription grant.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the project that has the subscription grant.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the project that has the subscription grant.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the project that has the subscription grant.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the project that has the subscription grant.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the project that has the subscription grant.</p>
     */
    inline SubscribedProject& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the project that has the subscription grant.</p>
     */
    inline SubscribedProject& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the project that has the subscription grant.</p>
     */
    inline SubscribedProject& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the project that has the subscription grant.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the project that has the subscription grant.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the project that has the subscription grant.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the project that has the subscription grant.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the project that has the subscription grant.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the project that has the subscription grant.</p>
     */
    inline SubscribedProject& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the project that has the subscription grant.</p>
     */
    inline SubscribedProject& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the project that has the subscription grant.</p>
     */
    inline SubscribedProject& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
