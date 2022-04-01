/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/StateDBType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace StateDBTypeMapper
      {

        static const int LevelDB_HASH = HashingUtils::HashString("LevelDB");
        static const int CouchDB_HASH = HashingUtils::HashString("CouchDB");


        StateDBType GetStateDBTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LevelDB_HASH)
          {
            return StateDBType::LevelDB;
          }
          else if (hashCode == CouchDB_HASH)
          {
            return StateDBType::CouchDB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StateDBType>(hashCode);
          }

          return StateDBType::NOT_SET;
        }

        Aws::String GetNameForStateDBType(StateDBType enumValue)
        {
          switch(enumValue)
          {
          case StateDBType::LevelDB:
            return "LevelDB";
          case StateDBType::CouchDB:
            return "CouchDB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StateDBTypeMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
